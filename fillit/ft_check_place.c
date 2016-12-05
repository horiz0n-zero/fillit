#include "libft.h"
#include "fillit.h"

int ft_check_l(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 2][anchor.r] == '.' && grid[anchor.c + 2][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_lr(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 2][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_lo(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 2] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_lor(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c + 1][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_s(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_z(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 2] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_sr(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 2][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_zr(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 2][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_o(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_iv(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 2][anchor.r] == '.' && grid[anchor.c + 3][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_ih(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c][anchor.r + 3] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_t(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_tr(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 2] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_to(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 2][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_tor(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 2][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_j(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 2][anchor.r + 1] == '.' && grid[anchor.c + 2][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_jr(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 2][anchor.r] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_jo(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c][anchor.r + 1] == '.' && grid[anchor.c][anchor.r + 2] == '.' && grid[anchor.c + 1][anchor.r + 2] == '.')
  {
    return (1);
  }
  return (0);
}

int ft_check_jor(t_anchor anchor, char **grid)
{
  if (grid[anchor.c][anchor.r] == '.' && grid[anchor.c + 1][anchor.r] == '.' && grid[anchor.c + 1][anchor.r + 1] == '.' && grid[anchor.c + 1][anchor.r + 2] == '.')
  {
    return (1);
  }
  return (0);
}
