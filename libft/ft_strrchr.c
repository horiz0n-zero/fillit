/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:11:05 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/17 21:57:12 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int		i;
	int		last;
	char	*tmp;

	tmp = (char*)s;
	i = 0;
	last = -1;
	while (tmp[i])
	{
		if (tmp[i] == n)
			last = i;
		i++;
	}
	if (tmp[i] == n)
		return (&tmp[i]);
	if (last != -1)
		return (&tmp[last]);
	else
		return (NULL);
}
