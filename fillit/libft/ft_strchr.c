/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:00:50 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/17 21:55:34 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char*)s;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	if (*tmp == c)
		return (tmp);
	return (NULL);
}
