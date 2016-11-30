/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:35:29 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:27:22 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_remove_data(t_data *object, char data)
{
	register t_data *last;

	object = object->first;
	object = object->next;
	last = object;
	while (object)
	{
		if (object->data == data)
		{
			last->next = object->next;
			free(object);
			object = NULL;
			return (1);
		}
		last = object;
		object = object->next;
	}
	return (0);
}
