#include "libft.h"
#include "fillit.h"

void ft_main_solve(t_block *blocks, int size)
{
  /*
  cette fonction prend en parametre les pieces a poser et le nombre de piece c'est ici que
  la resolution concrete du probleme commence.
  temps d'execution relatif : 0.06.
  update: suppression de l'utilisation du dictionaire ( colonne * 10 + ranger) du a une
  recherche de l'element cible trop perpetuel entrainant une certaine lenteur (~0.18).
  -> dico deprecier et remplacer par un simple double tableau de char utiliser comme ceci :
  grid[colonne][ranger] = value.
  */
  //ft_debug_print_blocks(blocks, size);
  char **tab;

  tab = ft_init_double_tab(size*4);
  ft_place_piece(&blocks, &tab, size);
  ft_debug_print_grid(tab, ft_get_main_size(tab));
  free(tab);
}

void ft_main(char *path)
{
  char *content;
  int   size_octal;
  int   size_piece;
  t_block *blocks;

  size_octal = ft_get_str_size(path);
  content = ft_get_str_from_path(path, size_octal);
  blocks = ft_get_block(content);
  size_piece = ft_n_piece(content);
  if (ft_verif(size_octal, size_piece, 0) == 0)
    ft_error(format);
  if (ft_count_hashtag(content, size_piece) == 0)
    ft_error(format);
  if (ft_got_error(blocks, size_piece) == 0)
    ft_error(format);
  ft_main_solve(blocks, size_piece);
  free(content);
  free(blocks);
}

void ft_call_main(char *path)
{
  if (path == NULL)
    ft_error(format);
  /* TODO: check for nill file */
  ft_main(path);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_error(format);
  }
  else
  {
    ft_call_main(argv[1]);
  }
  return (0);
}
