#include "libft.h"
#include "fillit.h"

void ft_place_l(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_lr(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_lo(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}

void ft_place_lor(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
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

void ft_place_sr(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
}

void ft_place_zr(t_anchor anchor, char ***grid, char c)
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

void ft_place_iv(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
  (*grid)[anchor.c + 3][anchor.r] = c;
}

void ft_place_ih(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c][anchor.r + 3] = c;
}

void ft_place_t(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
}

void ft_place_tr(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}

void ft_place_to(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
}

void ft_place_tor(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
}

void ft_place_j(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r + 1] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_jr(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 2][anchor.r] = c;
}

void ft_place_jo(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c][anchor.r + 1] = c;
  (*grid)[anchor.c][anchor.r + 2] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}

void ft_place_jor(t_anchor anchor, char ***grid, char c)
{
  (*grid)[anchor.c][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r] = c;
  (*grid)[anchor.c + 1][anchor.r + 1] = c;
  (*grid)[anchor.c + 1][anchor.r + 2] = c;
}
