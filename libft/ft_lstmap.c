/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:08:16 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/16 20:50:08 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_lstadded(t_list **lst, t_list *add)
{
	t_list *tmp;

	tmp = *lst;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = add;
	}
	else
		*lst = add;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map;

	map = NULL;
	while (lst != NULL)
	{
		ft_lstadded(&map, (*f)(lst));
		lst = lst->next;
	}
	return (map);
}
