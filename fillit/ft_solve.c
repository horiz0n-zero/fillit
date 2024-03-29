/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:19:34 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/08 18:20:24 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
#include <stdio.h>

void	ft_print_b(t_block block);

void	ft_swap(t_block **blocks, int indexA, int indexB)
{
	t_block	temp;

	temp = (*blocks)[indexA];
	(*blocks)[indexA] = (*blocks)[indexB];
	(*blocks)[indexB] = temp;
}

void	ft_print_b(t_block block)
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

int		ft_increment_anchor(t_anchor *anchor, int size)
{
	anchor->r = anchor->r + 1;
	if (anchor->r >= size)
	{
		anchor->r = 0;
		anchor->c = anchor->c + 1;
	}
	else if (anchor->c >= size)
		return (0);
	return (1);
}

void	ft_reset_grid(char ***grid, int cube)
{
	int		colonne;
	int		ranger;

	colonne = 0;
	ranger = 0;
	while (colonne < cube)
	{
		while (ranger < cube)
		{
			(*grid)[colonne][ranger] = '.';
			ranger++;
		}
		ranger = 0;
		colonne++;
	}
}

int		ft_resolve(t_block **blocks, char ***grid, int size, int cube)
{
	int		warning;
	int		i;
	void	(*func)(t_anchor, char***, char);
	t_anchor anchor;

	anchor.c = 0;
	anchor.r = 0;
	i = 0;
	warning = 0;
	while (i < size)
	{
		if (ft_get_check((*blocks)[i].piece, anchor, (*grid)) == 1)
		{
			func = ft_get_func((*blocks)[i].piece);
			if (func)
			{
				func(anchor, grid, (*blocks)[i].c);
				warning = 0;
			}
			i++;
		}
		else
		{
			if (ft_increment_anchor(&anchor, cube) == 0)
				warning++;
			if (warning > 1)
			{
				ft_reset_grid(grid, cube);
				return (0);
			}
		}
	}
	return (1);
}

void	ft_reset_blocks(t_block **blocks, t_block *save, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		(*blocks)[i] = save[i];
		i++;
	}
}

t_block	*ft_saving(t_block **blocks, int n)
{
	int		i;
	t_block	*save;

	i = 0;
	save = (t_block*)malloc(sizeof(t_block) * n);
	while (i < n)
	{
		save[i] = (*blocks)[i];
		i++;
	}
	return (save);
}

t_bool		ft_combinaison(t_block **blocks, char ***grid, int n, int cube)
{
	t_block		temp;
	int			i;
	int			j;
	int			save;

	save = n;
	i = 0;
	j = 1;
	while (j <= n)
	{
		while (i < n - 1)
		{
			if ((ft_resolve(blocks, grid, n, cube)) == 1)
				return (true);
			temp = (*blocks)[i];
			(*blocks)[i] = (*blocks)[i + 1];
			(*blocks)[i + 1] = temp;
			i++;
		}
		i = 0;
		j++;
	}
	return (false);
}

// fonction appeler dans le main.
void	ft_place_piece(t_block **blocks, char ***grid, int size)
{
	int			current_size;
	t_bool		is_sucess;
	t_block		*save;

	save = ft_saving(blocks, size);
	is_sucess = false;
	current_size = 2;
	ft_reset_grid(grid, current_size);
	while (is_sucess == false)
	{
		is_sucess = ft_combinaison(blocks, grid, size, current_size);
		if (is_sucess == false)
		{
			ft_reset_blocks(blocks, save, size);
			current_size++;
		}
	}
}

int		ft_get_check(t_piece piece, t_anchor anchor, char **grid)
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
		return (&ft_place_s);
	else
		return (NULL);
}
