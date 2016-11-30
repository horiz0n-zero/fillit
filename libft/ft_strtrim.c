/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:40:50 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/15 04:30:38 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		size;
	char	*will_be;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size = ft_strlen((char*)s) - 1) == 0)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!*s || size == i - 1)
		return (ft_strnew(1));
	while (size > 0 && (s[size] == ' ' || s[size] == '\n' || s[size] == '\t'))
		size--;
	will_be = ft_strsub(s, (unsigned int)i, (size - i + 1));
	return (will_be);
}
