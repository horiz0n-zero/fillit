#include "byte.h"
#include "libft.h"

void ft_get_data_i(void *pointer)
{
  wchar_t *data;

  data = (wchar_t *)pointer;
  if (data == NULL)
  {
    ft_putstr(" aucune donnée");
    return ;
  }
  ft_str_unicode(data);
}

int main(int argc, char const **argv) {
  void *p;
  int i;

  i = 0;
  p = (void*)&argc;
  ft_print_pointer(p);
  ft_putstr("point initial\n");
  while ((p + i) != NULL && i < 10)
  {
    ft_print_pointer(&p + i);
    ft_putchar(' ');
    //ft_get_data_i(&p + i);
    ft_putstr((const char*)p + i);
    i += ft_strlen((const char*)p + i);
    ft_putchar('\n');
    i++;
  }
  return 0;
}
