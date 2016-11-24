/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:01:43 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 17:08:25 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_remove(t_data *object, int key)
{
	register t_data *last;

	object = object->first;
	last = object;
	object = object->next;
	if (object->key == key)
	{
		last->next = object->next;
		free(object);
		return (1);
	}
	last = object;
	while (object)
	{
		if (object->key == key)
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
