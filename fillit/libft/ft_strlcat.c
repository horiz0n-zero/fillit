/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:47:18 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/12 19:26:41 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, char *s2, size_t size)
{
	size_t	i;
	size_t	size_1;
	size_t	size_2;

	i = 0;
	size_1 = ft_strlen(s1);
	size_2 = ft_strlen(s2);
	if (size_1 > size)
		return (size_2 + size);
	while (s2[i] && (size_1 + i < size - 1))
	{
		s1[size_1 + i] = s2[i];
		i++;
	}
	s1[size_1 + i] = '\0';
	return (size_1 + size_2);
}
