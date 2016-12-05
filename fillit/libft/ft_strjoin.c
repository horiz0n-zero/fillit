/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:30:53 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 22:28:25 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		start;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = malloc(sizeof(char) *
			((ft_strlen((char*)s1) + ft_strlen((char*)s2)) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	start = 0;
	while (s1[i])
		tab[start++] = s1[i++];
	i = 0;
	while (s2[i])
	{
		tab[start] = s2[i];
		i++;
		start++;
	}
	tab[start] = '\0';
	return (tab);
}
