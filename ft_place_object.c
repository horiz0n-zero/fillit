#include "libft.h"
#include "fillit.h"

void ft_place_l(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_l_r(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_n(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_n_r(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_s(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
}

void ft_place_z(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}

void ft_place_s_r(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_z_r(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_o(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
}

void ft_place_i_v(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
  (*grid)[anchor.c + 3][anchor.r] = c;
}

void ft_place_i_h(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c][anchor.r + 3] = c;
}

void ft_place_t(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}

void ft_place_t_r(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
}

void ft_place_t_g(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_t_d(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}
