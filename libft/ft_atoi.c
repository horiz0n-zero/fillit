/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:40:45 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/18 18:00:54 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int		nbr;
	int		i;
	int		nega;

	nbr = 0;
	nega = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		nega = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (nega == 1)
		return (-nbr);
	else
		return (nbr);
}
