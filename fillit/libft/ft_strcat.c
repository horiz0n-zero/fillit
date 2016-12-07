/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:34:45 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/17 22:02:03 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int super_i;

	i = 0;
	super_i = 0;
	while (s1[i])
		i++;
	while (s2[super_i])
	{
		s1[i] = s2[super_i];
		super_i++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
