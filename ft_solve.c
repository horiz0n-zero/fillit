/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:43:48 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/23 21:07:23 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

t_block		*ft_get_piece(char **tab, int size)
{
	t_block		*blocks;
	int			i;

	i = 0;
	blocks = (t_block*)malloc(sizeof(t_block) * size);
	while (size > 0)
	{
		blocks[i].piece = ft_is_of_type(tab[i]);
		blocks[i].c = (char)('A' + i);
		i++;
		size--;
	}
	if (ft_any_error(blocks, size) == 0)
		return (NULL);
	return (blocks);
}

void	ft_put_as_grid(char *str, int size)
{
	int		save_size;
	int		saved;

	saved = size;
	save_size = size;
	while (save_size > 0)
	{
		while (size > 0)
		{
			ft_putchar(*str);
			str++;
			size--;
		}
		size = saved;
		ft_putchar('\n');
		save_size--;
	}
}

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (nb > i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
void	ft_place(char **str, t_block *blocks)
{
	int		skip_colonne;
	int		skip_ranger;

	skip_colonne = 0;
	skip_ranger = 0;
	while (*blocks)
	{
		
	}
}
*/
char	*ft_init_tab(int size)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char*)malloc(sizeof(char) * ((size * size) + 1));
	size *= size;
	while (size > 0)
	{
		tab[i] = '.';
		i++;
		size--;
	}
	tab[i] = '\0';
	return (tab);
}

int		ft_square_size(t_block *blocks, int size)
{
	int		result;

	result = size*4;
	result = ft_sqrt(result) + 1;
	return (result);
}
