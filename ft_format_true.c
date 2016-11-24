/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_true.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:33:31 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:38:03 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_format_true(char *content)
{
	if (content == NULL)
		return (0);
	else
		return (1);
}

int		ft_any_error(t_block *blocks, int size)
{
	int		i;

	i = 0;
	while (size > 0)
	{
		if (blocks[i].piece == error)
			return (1);
		i++;
		size--;
	}
	return (0);
}
