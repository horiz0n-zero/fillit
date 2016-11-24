/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:14:53 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/15 20:33:25 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*copydst;
	char		*copysrc;

	copysrc = (char*)src;
	copydst = (char*)dst;
	if (dst < src)
	{
		ft_memcpy(copydst, copysrc, len);
	}
	else
	{
		while (len--)
			copydst[len] = copysrc[len];
	}
	return (dst);
}
