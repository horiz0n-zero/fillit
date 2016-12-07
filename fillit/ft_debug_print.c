/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:15:31 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/05 13:16:16 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_debug_print_blocks(t_block *blocks, int size)
{
  int	i;

  i = 0;
  while (i < size)
  {
    ft_putchar(blocks[i].c);
    ft_putchar(' ');
    ft_type_print(blocks[i].piece);
    i++;
  }
}

void	ft_debug_print_grid(char **tab, int size)
{
  int	colonne;
  int	ranger;

  colonne = 0;
  ranger = 0;
  while (colonne < size) {
    while (ranger < size) {
      ft_putchar(tab[colonne][ranger]);
      ranger++;
    }
    ranger = 0;
    colonne++;
    ft_putchar('\n');
  }
}

void	ft_type_print(t_piece piece)
{
	if (piece == ih)
		ft_putstr("forme de I horizontal\n");
	else if (piece == iv)
		ft_putstr("forme de I vertical\n");
	else if (piece == o)
		ft_putstr("forme de O\n");
	else if (piece == lr)
		ft_putstr("forme de l reverse\n");
	else if (piece == l)
		ft_putstr("forme de l\n");
  else if (piece == lo)
  	ft_putstr("forme de lo\n");
  else if (piece == lor)
  	ft_putstr("forme de lor\n");
  else if (piece == tr)
  	ft_putstr("forme de t reverse\n");
  else if (piece == t)
  	ft_putstr("forme de t\n");
  else if (piece == to)
  	ft_putstr("forme de to\n");
  else if (piece == tor)
  	ft_putstr("forme de tor\n");
  else if (piece == j)
  	ft_putstr("forme de j\n");
  else if (piece == jr)
  	ft_putstr("forme de j reverse\n");
  else if (piece == jo)
  	ft_putstr("forme de jo\n");
  else if (piece == jor)
		ft_putstr("forme de jor\n");
  else if (piece == zr)
    ft_putstr("forme de z reverse\n");
  else if (piece == z)
    ft_putstr("forme de z\n");
  else if (piece == sr)
    ft_putstr("forme de s reverse\n");
  else if (piece == s)
  	ft_putstr("forme de s\n");
	else
		ft_putstr("forme inreconnaissable [ERREUR]\n");
}
