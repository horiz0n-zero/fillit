/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:39:03 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/17 22:00:56 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t i;
	size_t super_i;

	i = 0;
	super_i = 0;
	while (s1[i])
		i++;
	while (s2[super_i] && super_i < n)
	{
		s1[i] = s2[super_i];
		super_i++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
