/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_is.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:42:14 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/06 14:42:17 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

t_piece		ft_is_zs(char *str)
{
	if (str[4] == '#' && str[5] == '#' && str[9] == '#')
		return (zr);
	if (str[1] == '#' && str[6] == '#' && str[7] == '#')
		return (z);
	if (str[5] == '#' && str[6] == '#' && str[11] == '#')
		return (sr);
	if (str[1] == '#' && str[4] == '#' && str[5] == '#')
		return (s);
	return (error);
}

t_piece		ft_is_tj(char *str)
{
	if (str[4] == '#' && str[5] == '#' && str[6] == '#')
		return (tr);
	if (str[5] == '#' && str[6] == '#' && str[10] == '#')
		return (to);
	if (str[1] == '#' && str[2] == '#' && str[6] == '#')
		return (t);
	if (str[4] == '#' && str[5] == '#' && str[10] == '#')
		return (tor);
	if (str[1] == '#' && str[5] == '#' && str[10] == '#')
		return (jr);
	if (str[1] == '#' && str[2] == '#' && str[7] == '#')
		return (jo);
	if (str[5] == '#' && str[9] == '#' && str[10] == '#')
		return (j);
	if (str[5] == '#' && str[6] == '#' && str[7] == '#')
		return (jor);
	return (ft_is_zs(str));
}

t_piece		ft_is_iol(char *str)
{
	if (str[1] == '#' && str[2] == '#' && str[3] == '#')
		return (ih);
	if (str[5] == '#' && str[10] == '#' && str[15] == '#')
		return (iv);
	if (str[1] == '#' && str[5] == '#' && str[6] == '#')
		return (o);
	if (str[1] == '#' && str[6] == '#' && str[11] == '#')
		return (lr);
	if (str[3] == '#' && str[4] == '#' && str[5] == '#')
		return (lo);
	if (str[5] == '#' && str[10] == '#' && str[11] == '#')
		return (l);
	if (str[1] == '#' && str[2] == '#' && str[5] == '#')
		return (lor);
	return (ft_is_tj(str));
}

t_piece		ft_is_of_type(char *str)
{
	while (*str != '#')
		str++;
	return (ft_is_iol(str));
}
