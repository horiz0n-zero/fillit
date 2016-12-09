/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:15:16 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/08 16:55:50 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_get_main_size(char **grid)
{
	int	ranger;
	int	colonne;
	int	max;

	max = 0;
	colonne = 0;
	ranger = 0;
	while (grid[colonne]) {
		while (grid[colonne][ranger]) {
			if ((grid[colonne][ranger] != '.' &&
					grid[colonne][ranger] != '#') && (max < ranger || max < colonne))
				max = ranger > colonne ? ranger : colonne;
			ranger++;
		}
		ranger = 0;
		colonne++;
	}
	return (max + 1);
}

int		ft_illegal_char(char *content)
{
	while (*content)
	{
		if (!(*content == '.' || *content == '#' ||
					*content == '\n'))
			return (0);
		content++;
	}
	return (1);
}

int		ft_got_cube(char *content)
{
	int		ranger;
	int		colonne;
	int		i;

	i = 0;
	ranger = 0;
	colonne = 0;
	while (content[i])
	{
		while (ranger < 5)
		{
			i++;
			ranger++;
		}
		ranger = 0;
		colonne++;
		if (colonne >= 4)
		{
			colonne = 0;
			if (content[i] != '\n' && content[i])
				return (0);
			i++;
		}
	}
	return (1);
}

int		ft_count_hashtag(char *content, int n)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (content[i])
	{
		if (content[i] == '#')
		{
			count++;
		}
		i++;
	}
	if (count != n * 4)
		return (0);
	return (1);
}

int		ft_got_error(t_block *array, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (array[i].piece == error)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_verif(int size, int n_piece, int save)
{
	save = n_piece;
	n_piece *= 20;
	n_piece += (save - 1);
	if (size == n_piece)
		return (1);
	else
		return (0);
}

char	**ft_init_double_tab(int size)
{
	int	colonne;
	int	ranger;
	char	**tab;

	colonne = 0;
	ranger = 0;
	tab = (char**)malloc(sizeof(char*) * (size + 1));
	while (colonne < size)
	{
		tab[colonne] = (char*)malloc(sizeof(char) * (size + 1));
		while (ranger < size) {
			tab[colonne][ranger] = '#';
		ranger++;
		}
		tab[colonne][ranger] = '\0';
		ranger = 0;
		colonne++;
	}
	tab[colonne] = NULL;
	return (tab);
}
