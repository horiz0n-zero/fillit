/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:21:39 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 20:13:24 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tab1;
	unsigned char	*tab2;
	int				i;

	i = 0;
	tab1 = (unsigned char*)s1;
	tab2 = (unsigned char*)s2;
	while (n > 0 && tab1[i] == tab2[i])
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (tab1[i] - tab2[i]);
	return (0);
}
