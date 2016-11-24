/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maillon_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:04:54 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:31:10 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

t_data		*ft_maillon_create(int size_grid)
{
	int		ranger;
	int		colonne;
	t_data	*maillon;
	char	referance;

	referance = '.';
	maillon = ft_init();
	colonne = size_grid;
	ranger = size_grid;
	while (colonne > 0)
	{
		while (ranger > 0)
		{
			ft_append(&maillon, (colonne * 10 + ranger), referance);
			ranger--;
		}
		ranger = size_grid;
		colonne--;
	}
	return (maillon);
}
