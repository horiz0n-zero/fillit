/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:29:05 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 17:06:58 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_data		*ft_get_object(t_data *object, int key)
{
	object = object->first;
	object = object->next;
	while (object)
	{
		if (object->key == key)
			return (object);
		object = object->next;
	}
	return (NULL);
}
