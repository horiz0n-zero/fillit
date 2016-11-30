/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 03:30:39 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:27:43 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_append(t_data **object, int key, char data)
{
	t_data *new;

	new = (t_data*)malloc(sizeof(t_data));
	if (new == NULL || (*object) == NULL)
		return (0);
	new->key = key;
	new->data = data;
	new->next = NULL;
	new->first = (*object)->first;
	(*object)->next = new;
	(*object) = new;
	return (1);
}
