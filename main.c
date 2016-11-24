/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:39:45 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 16:00:05 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_print_pieces(t_piece *pieces, int size)
{
	int		i;

	i = 0;
	while (size > 0)
	{
		ft_type_print(pieces[i]);
		i++;
		size--;
	}
}

void	ft_error(void)
{
	ft_putstr("error");
}

void	ft_print_blocks(t_block *blocks, int size)
{
	int i;

	i = 0;
	while (size > 0)
	{
		ft_putchar(blocks[i].c);
		ft_type_print(blocks[i].piece);
		ft_putchar('\n');
		i++;
		size--;
	}
}

char	ft_convert(void *data)
{
	char	*c;

	c = (char*)data;
	if (c == NULL)
		return ('@');
	return (c[0]);
}

void	ft_print_maillon(t_data *maillon, int size)
{
	int		colonne;
	int		ranger;
	int		key;

	colonne = size;
	ranger = size;
	key = 0;
	while (colonne > 0)
	{
		while (ranger > 0)
		{
			key = colonne * 10 + ranger;
			ft_putchar(ft_get(maillon, key));
			ranger--;
		}
		ranger = size;
		colonne--;
		ft_putchar('\n');
	}
}

void	ft_print_chaine(t_data *maillon)
{
	maillon = maillon->first;
	maillon = maillon->next;
	while (maillon)
	{
		ft_putchar('$');
		ft_putchar(maillon->data);
		ft_putchar(ft_get(maillon, maillon->key));
		maillon = maillon->next;
	}
}

void	ft_main_solve(t_block *blocks, int size)
{
	t_data	*maillon;
	ft_print_blocks(blocks, size);
	size = ft_square_size(blocks, size);
	ft_putnbr(size);
	ft_putchar('\n');
	maillon = ft_maillon_create(size);
	ft_print_maillon(maillon, size);
	ft_putchar('\n');
	t_point point;
	point.x = 0;
	point.y = 0;
	ft_place_o(point, maillon, blocks[0].c);
	ft_print_maillon(maillon, size);
	ft_print_chaine(maillon);
	ft_putnbr(ft_count(maillon));
	ft_putchar('\n');
}

void	ft_main(char *path)
{
	int		size;
	char	*content;
	char	**tab;
	t_block	*blocks;

	size = ft_get_str_size(path);
	content = ft_get_str_from_path(path, size);
	ft_putstr(content);
	if (ft_format_true(content) == 0)
	{
		ft_error();
		return ;
	}
	size = ft_n_piece(content);
	tab = ft_return_piece(content, size);
	blocks = ft_get_piece(tab, size);
	ft_main_solve(blocks, size);
	free(blocks);
	free(tab);
	free(content);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_main(argv[1]);
	else
		ft_error();
	return (0);
}
