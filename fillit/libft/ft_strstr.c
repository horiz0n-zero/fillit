/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:53:10 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 21:49:23 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		loc;
	int		location;

	i = 0;
	while (i <= (int)(ft_strlen((char*)s1) - ft_strlen((char*)s2)))
	{
		loc = 0;
		location = 1;
		while (loc < (int)ft_strlen((char*)s2))
		{
			if (s1[i + loc] != s2[loc])
				location = 0;
			loc++;
		}
		if (location)
			return ((char*)(s1 + i));
		i++;
	}
	return (NULL);
}
