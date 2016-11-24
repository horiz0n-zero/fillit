/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 20:56:43 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:32:03 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_place_i_h(char **str, char c, t_point anchor)
{
	(*str)[anchor.x] = c;
	(*str)[anchor.x + 1] = c;
	(*str)[anchor.x + 2] = c;
	(*str)[anchor.x + 3] = c;
}

void	ft_place_i_v(char **str, char c, t_point anchor)
{
	(*str)[anchor.y] = c;
	(*str)[anchor.y + 1] = c;
	(*str)[anchor.y + 2] = c;
	(*str)[anchor.y + 3] = c;
}

void	ft_posit(int key, t_data *maillon, char ref)
{
	t_data	*target;

	target = ft_get_object(maillon, key);
	if (target == NULL)
		return ;
	target->data = ref;
}

void	ft_place_o(t_point anchor, t_data *maillon, char c)
{
	ft_posit(anchor.y * 10 + anchor.x, maillon, c);
	ft_posit((anchor.y - 1) * 10 + anchor.x, maillon, c);
	ft_posit(((anchor.y - 1) * 10 + (anchor.x - 1)), maillon, c);
	ft_posit((anchor.y * 10 + (anchor.x - 1)), maillon, c);
}
