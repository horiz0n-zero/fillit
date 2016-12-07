/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:39:00 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/18 15:41:23 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	char	*end;
	char	tempo;

	end = (str + ft_strlen(str) - 1);
	while (str < end)
	{
		tempo = *str;
		*str++ = *end;
		*end-- = tempo;
	}
}
