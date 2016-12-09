/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:19:58 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 22:18:52 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (len > 0)
	{
		tab[i] = s[start];
		start += 1;
		len -= 1;
		i += 1;
	}
	tab[i] = '\0';
	return (tab);
}
