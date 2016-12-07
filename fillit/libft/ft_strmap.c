/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:11:38 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 22:13:22 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	if (s == NULL)
		return (NULL);
	fresh = (char*)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (fresh == NULL)
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i += 1;
	}
	fresh[i] = '\0';
	return (fresh);
}
