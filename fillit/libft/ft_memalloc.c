/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:08:54 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/10 14:19:49 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char *tab;

	tab = (unsigned char*)malloc(size);
	if (tab == NULL)
		return (NULL);
	while (size-- > 0)
		tab[size] = '\0';
	return (tab);
}
