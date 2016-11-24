/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:40:46 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/23 14:17:46 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void		ft_type_print(t_piece piece)
{
	if (piece == I)
		ft_putstr("forme droite\n");
	else if (piece == O)
		ft_putstr("forme carrer\n");
	else if (piece == T)
		ft_putstr("forme de T\n");
	else if (piece == L)
		ft_putstr("forme de L\n");
	else if (piece == J)
		ft_putstr("forme de J\n");
	else if (Z)
		ft_putstr("forme de Z\n");
	else if (S)
		ft_putstr("forme de S");
	else
		ft_putstr("forme inreconnaissable [ERREUR]\n");
}

t_piece		ft_is_of_type(char *str)
{
	int		i;

	i = 0;
	if (ft_strlen(str) != 16)
		return (error);
	while (str[i] != '#')
		i++;
	if (str[i] == '#' && str[i + 4] == '#' 
			&& str[i + 8] == '#' && str[i + 12] == '#')
		return (I);
	if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#'
			&& (i == 4 || i == 8 || i == 12 || i == 16))
		return (I);
	if (str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#'
			&& str[i + 5] == '#')
		return (O);
	if (str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#'
			&& str[i + 7] == '#')
		return (T);
	if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#'
			&& str[i + 6] == '#')
		return (L);
	if (str[i] == '#' && str[i + 4] == '#' && str[i + 7] == '#'
			&& str[i + 8] == '#')
		return (J);
	if (str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#'
			&& str[i + 7] == '#')
		return (Z);
	if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#'
			&& str[i + 8] == '#')
		return (S);
	return (error);
}
