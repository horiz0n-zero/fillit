
#include "fillit.h"
#include "libft.h"

void ft_error(t_error error)
{
  if (error == format)
  {
    ft_putstr("error\n");
  }
  else if (error == nil)
  {
    ft_putstr("usage: fillit source_file\n");
    ft_putstr("       fillit required an argument: a file name that contain corect fillit tetriminos describe.\n");
  }
  exit(EXIT_FAILURE);
}
