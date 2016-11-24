/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_required.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 23:19:06 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/23 17:34:31 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		ft_get_str_size(char *path)
{
	int		fd;
	int		readen;
	char	buff;
	int		result;

	result = 0;
	buff = '@';
	fd = open(path, O_RDONLY);
	readen = read(fd, &buff, 1);
	while (readen != 0)
	{
		result++;
		readen = read(fd, &buff, 1);
	}
	close(fd);
	return (result);
}

char	*ft_get_str_from_path(char *path, int size)
{
	char	*tab;
	char	tempo;
	int	i;
	int	fd;

	i = 0;
	tab = (char*)malloc(sizeof(char) * (size + 1));
	fd = open(path, O_RDONLY);
	while(read(fd, &tempo, 1) != 0 && tempo != '\0')
	{
		tab[i] = tempo;
		i++;
	}
	tab[i] = '\0';
	close(fd);
	return (tab);
}

char	*ft_piece_at(char *content, int stage)
{
	int		current;
	int		colonne;

	colonne = 0;
	current = 0;
	while (*content)
	{
		if (current == stage)
			return (ft_piece(content));
		while (*content == '.' || *content == '#')
			content++;
		content++;
		colonne++;
		if (colonne == 4)
		{
			colonne = 0;
			content++;
			current++;
		}
	}
	return (NULL);
}

char	*ft_piece(char *content)
{
	char	*tab;
	int		colonne;
	int		i;

	i = 0;
	colonne = 0;
	tab = (char*)malloc(sizeof(char) * 17);
	while (*content)
	{
		while (*content == '.' || *content == '#')
		{
			tab[i] = *content;
			i++;
			content++;
		}
		content++;
		colonne++;
		if (colonne >= 4)
		{
			tab[16] = '\0';
			return (tab);
		}
	}
	tab[16] = '\0';
	return (tab);
}

char	**ft_return_piece(char *content, int size)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char**)malloc(sizeof(char*) * size);
	while (size > 0)
	{
		tab[i] = ft_piece_at(content, i);
		i++;
		size--;
	}
	return (tab);
}

int		ft_n_piece(char *content)
{
	int result;
	int colonne;

	colonne = 0;
	result = 0;
	while (*content)
	{
		while (*content == '.' || *content == '#')
			content++;
		if (*content != '.' || *content != '#')
		{
			content++;
			colonne++;
		}
		if (colonne >= 4)
		{
			colonne = 0;
			result++;
		}
	}
	return (result);
}
