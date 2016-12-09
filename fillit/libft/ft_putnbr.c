/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:00:18 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 18:47:50 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (0);
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putnbr(7483648);
		return (0);
	}
	else if (nb == -709551615)
	{
		ft_putchar('-');
		ft_putchar('7');
		ft_putchar('0');
		ft_putchar('9');
		ft_putnbr(551615);
		return (0);
	}
	else
		return (1);
}

void			ft_putnbr(int nb)
{
	if (ft_check_putnbr(nb) == 0)
		return ;
	if (nb <= 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
