/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 12:51:54 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 22:15:31 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i += 1;
	}
	return (1);
}
