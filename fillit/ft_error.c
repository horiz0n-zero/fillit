
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
    ft_putstr("usage: fillit [ Any ] source_file\n");
  }
  exit(EXIT_FAILURE);
}
