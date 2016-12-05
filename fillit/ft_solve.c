#include "libft.h"
#include "fillit.h"

void   ft_swap(t_block **blocks, int indexA, int indexB)
{
  t_block temp;

  temp = (*blocks)[indexA];
  (*blocks)[indexA] = (*blocks)[indexB];
  (*blocks)[indexB] = temp;
}

void   ft_print_b(t_block block)
{
  ft_putstr("anchor(");
  ft_putnbr(block.anchor.c);
  ft_putstr(", ");
  ft_putnbr(block.anchor.r);
  ft_putstr(") at index: ");
  ft_putnbr(block.index);
  ft_putstr(" for char ");
  ft_putchar(block.c);
  ft_putchar(' ');
  ft_type_print(block.piece);
}

void   ft_remove_and_swap(t_block **blocks, int indexA, int indexB, char ***grid)
{
  void (*func)(t_anchor, char***, char);

  func = ft_get_func((*blocks)[indexA].piece);
  ft_putstr("will remove and swap :\n");
  ft_print_b((*blocks)[indexA]);
  ft_print_b((*blocks)[indexB]);
  if (func)
    func((*blocks)[indexA].anchor, grid, '.');
  func = ft_get_func((*blocks)[indexB].piece);
  if (func)
    func((*blocks)[indexB].anchor, grid, '.');
  ft_swap(blocks, indexA, indexB);
}

void   ft_change_position(t_anchor *anchor, char ***grid, t_block block, int size, t_block **blocks)
{
  int warning;
  int condition;

  condition = 0;
  warning = 0;
  while (condition != 1 && warning < 2) {
    anchor->r = anchor->r + 1;
    if (anchor->r >= size)
    {
      anchor->r = 0;
      anchor->c = anchor->c + 1;
    }
    if (anchor->c >= size)
    {
      anchor->r = 0;
      anchor->c = 0;
      warning++;
    }
    condition = ft_get_check(block.piece, (*anchor), (*grid));
  }
  if (warning >= 2)
  {
    if (block.index == 0) {
      ft_putstr("un scenario improbable vient de se produire func(change_position) tente de swap un index negatif ! [ERROR]\n");
      ft_error(format);
    }
    ft_remove_and_swap(blocks, block.index, block.index - 1, grid);
    ft_putstr("remove and swap ()\n");
  }
}

void   ft_resolve(t_block **blocks, char ***grid, int size)
{
  int i;
  t_anchor anchor;
  void (*func)(t_anchor, char***, char);

  i = 0;
  anchor.c = 0;
  anchor.r = 0;
  while (i < size) {
    if (ft_get_check((*blocks)[i].piece, anchor, (*grid)) == 1)
    {
      func = ft_get_func((*blocks)[i].piece);
      if (func)
      {
        func(anchor, grid, (*blocks)[i].c);
        (*blocks)[i].anchor = anchor;
        ft_print_b((*blocks)[i]);
      }
      i++;
    }
    else
    {
      ft_change_position(&anchor, grid, (*blocks)[i], size, blocks);
    }
  }
}

// fonction appeler dans le main.
void   ft_place_piece(t_block **blocks, char ***grid, int size)
{
  ft_resolve(blocks, grid, size);
}

int   ft_get_check(t_piece piece, t_anchor anchor, char **grid)
{
  if (piece == ih)
		return (ft_check_ih(anchor, grid));
	else if (piece == iv)
		return (ft_check_iv(anchor, grid));
	else if (piece == o)
		return (ft_check_o(anchor, grid));
	else if (piece == lr)
		return (ft_check_lr(anchor, grid));
	else if (piece == l)
		return (ft_check_l(anchor, grid));
  else if (piece == lo)
  	return (ft_check_lo(anchor, grid));
  else if (piece == lor)
  	return (ft_check_lor(anchor, grid));
  else if (piece == tr)
  	return (ft_check_tr(anchor, grid));
  else if (piece == t)
  	return (ft_check_t(anchor, grid));
  else if (piece == to)
  	return (ft_check_to(anchor, grid));
  else if (piece == tor)
  	return (ft_check_tor(anchor, grid));
  else if (piece == j)
  	return (ft_check_j(anchor, grid));
  else if (piece == jr)
  	return (ft_check_jr(anchor, grid));
  else if (piece == jo)
  	return (ft_check_jo(anchor, grid));
  else if (piece == jor)
		return (ft_check_jor(anchor, grid));
  else if (piece == zr)
    return (ft_check_zr(anchor, grid));
  else if (piece == z)
    return (ft_check_z(anchor, grid));
  else if (piece == sr)
    return (ft_check_sr(anchor, grid));
  else if (piece == s)
  	return (ft_check_sr(anchor, grid));
	else
    return (0);
}

void (*ft_get_func(t_piece piece))(t_anchor, char***, char)
{
  if (piece == ih)
		return (&ft_place_ih);
	else if (piece == iv)
		return (&ft_place_iv);
	else if (piece == o)
		return (&ft_place_o);
	else if (piece == lr)
		return (&ft_place_lr);
	else if (piece == l)
		return (&ft_place_l);
  else if (piece == lo)
  	return (&ft_place_lo);
  else if (piece == lor)
  	return (&ft_place_lor);
  else if (piece == tr)
  	return (&ft_place_tr);
  else if (piece == t)
  	return (&ft_place_t);
  else if (piece == to)
  	return (&ft_place_to);
  else if (piece == tor)
  	return (&ft_place_tor);
  else if (piece == j)
  	return (&ft_place_j);
  else if (piece == jr)
  	return (&ft_place_jr);
  else if (piece == jo)
  	return (&ft_place_jo);
  else if (piece == jor)
		return (&ft_place_jor);
  else if (piece == zr)
    return (&ft_place_zr);
  else if (piece == z)
    return (&ft_place_z);
  else if (piece == sr)
    return (&ft_place_sr);
  else if (piece == s)
  	return (&ft_place_sr);
	else
    return (NULL);
}
