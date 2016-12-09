/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:16:53 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/05 15:47:14 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <unistd.h>

int			ft_n_piece(char *content)
{
	int		i;
	int		ranger;
	int		colonne;
	int		result;

	result = 0;
	colonne = 0;
	ranger = 0;
	i = 0;
	while (content[i]) {
		while (ranger < 4) {
			i++;
			ranger++;
		}
		ranger = 0;
		i++;
		colonne++;
		if (colonne == 4)
		{
			colonne = 0;
			i++;
			result++;
		}
	}
	return (result);
}

t_block		*ft_get_block(char *content)
{
	int			i;
	int			size;
	t_block		*blocks;
	t_anchor	point_zero;

	point_zero.c = 0;
	point_zero.r = 0;
	size = ft_n_piece(content);
	blocks = (t_block*)malloc(sizeof(t_block) * (size + 1));
	i = 0;
	while(i < size)
	{
		blocks[i].piece = ft_is_of_type(content);
		blocks[i].c = 'A' + i;
		blocks[i].index = i;
		blocks[i].anchor = point_zero;
		blocks[i].placed = -1;
		content += 21;
		i++;
	}
	blocks[i].index = -1;
	return (blocks);
}

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
