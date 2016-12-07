/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:16:24 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/06 14:40:33 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_error(t_error error)
{
	if (error == format)
		ft_putstr("error\n");
	else if (error == nil)
		ft_putstr("usage: fillit [ Any ] source_file\n");
	exit(EXIT_FAILURE);
}
