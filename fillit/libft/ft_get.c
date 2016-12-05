/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:02:57 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:28:29 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_get(t_data *object, int key)
{
	object = object->first;
	object = object->next;
	while (object)
	{
		if (object->key == key)
			return (object->data);
		object = object->next;
	}
	return ('@');
}
