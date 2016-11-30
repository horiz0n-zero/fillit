#include "libft.h"
#include "fillit.h"

char **ft_init_double_tab(int size)
{
  int colonne;
  int ranger;
  char **tab;

  colonne = 0;
  ranger = 0;
  tab = (char**)malloc(sizeof(char*) * (size + 1));
  while (colonne < size)
  {
    tab[colonne] = (char*)malloc(sizeof(char) * (size + 1));
    while (ranger < size) {
      tab[colonne][ranger] = '.';
      ranger++;
    }
    tab[colonne][ranger] = '\0';
    ranger = 0;
    colonne++;
  }
  tab[colonne] = NULL;
  return (tab);
}
