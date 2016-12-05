/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:00:30 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 00:03:32 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	lenght;

	lenght = ft_strlen((char*)s2);
	if (s1 == NULL)
		ft_memmove(NULL, NULL, 300);
	if (!*s2)
		return ((char*)s1);
	while (*s1 && lenght <= n--)
	{
		if (!ft_memcmp(s1++, s2, lenght))
			return ((char*)s1 - 1);
	}
	return (NULL);
}
