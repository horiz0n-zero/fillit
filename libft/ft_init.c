/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:09:30 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:29:08 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_data		*ft_init(void)
{
	t_data *first;

	first = (t_data*)malloc(sizeof(t_data));
	first->next = NULL;
	first->data = '>';
	first->key = -1;
	first->first = first;
	return (first);
}
