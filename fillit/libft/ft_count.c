/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:57:29 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 17:09:37 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(t_data *object)
{
	int		i;

	i = 0;
	object = object->first;
	while (object)
	{
		object = object->next;
		i++;
	}
	return (i - 1);
}
