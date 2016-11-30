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


}

void ft_main(char *path)
{
  char *content;
  int   size;
  t_block *blocks;

  size = ft_get_str_size(path);
  // recupere la taille en octet du fichier donner en parametre
  content = ft_get_str_from_path(path, size);
  // alloue avec malloc et renvoie un le contenue du fichier dans content grace a size.
  ft_putstr(content);
  ft_putnbr(ft_n_piece(content));
  ft_putchar('\n');
  blocks = ft_get_block(content);
  // analyse et retourne des blocks qui contenient le type de piece et leur nombre.
  // blocks possede deux values: t_piece aka enum de piece { I, O, L etc} et un char.
  // voir le sujet.
  ft_main_solve(blocks, ft_n_piece(content));
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
