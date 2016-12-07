/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:13:21 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/17 22:38:23 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	ptr = (unsigned char*)s;
	while (n--)
	{
		if (ptr[i] == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
