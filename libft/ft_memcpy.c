/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:54:48 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/18 16:28:04 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*tab;
	unsigned char	*tabb;
	size_t			i;

	i = 0;
	tab = (unsigned char*)s1;
	tabb = (unsigned char*)s2;
	while (i < n)
	{
		tab[i] = tabb[i];
		i++;
	}
	return (s1);
}
