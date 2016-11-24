/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:38:02 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:32:15 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

typedef enum	e_piece
{
				I,
				T,
				O,
				L,
				J,
				Z,
				S,
				error
}				t_piece;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void	ft_place_i_h(char **str, char c, t_point anchor);

void	ft_place_i_v(char **str, char c, t_point anchor);

typedef struct	s_block
{
	char		c;
	t_piece		piece;
}				t_block;

t_data	*ft_maillon_create(int size_grid);

void	ft_place_o(t_point anchor, t_data *maillon, char c);

char	*ft_init_tab(int size);

void	ft_put_as_grid(char *str, int size);

int		ft_square_size(t_block *blocks, int size);

int		ft_any_error(t_block *blocks, int size);

t_block	*ft_get_piece(char **tab, int size);

void	ft_type_print(t_piece piece);

t_piece	ft_is_of_type(char *str);

int		ft_get_str_size(char *path);

char	*ft_get_str_from_path(char *path, int size);

char	*ft_piece(char *content);

int		ft_format_true(char *content);

int		ft_n_piece(char *content);

char	**ft_return_piece(char *content, int size);
