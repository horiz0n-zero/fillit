/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:41:44 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/18 17:41:35 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_unsuported(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (0);
	}
	else if (nb == -709551615)
	{
		ft_putstr_fd("-709551615", fd);
		return (0);
	}
	else
		return (1);
}

void		ft_putnbr_fd(int nb, int fd)
{
	if (ft_unsuported(nb, fd) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}
