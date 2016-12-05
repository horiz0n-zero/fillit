/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:52:06 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/18 16:58:05 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char			*tab;
	int				i;
	int				sign;
	unsigned int	save;

	save = n;
	i = 0;
	tab = ft_strnew(ft_int_size(n));
	if (tab == NULL)
		return (NULL);
	if ((sign = n) < 0)
		save = -n;
	if (save == 0)
		tab[i++] = '0';
	while (save > 0)
	{
		tab[i++] = save % 10 + '0';
		save /= 10;
	}
	if (sign < 0)
		tab[i++] = '-';
	tab[i] = '\0';
	ft_strrev(tab);
	return (tab);
}
