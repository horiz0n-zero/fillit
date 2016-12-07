/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 20:30:27 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/06 21:09:47 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mul(int a, int b)
{
	return (a * b);
}

int	(*nfunc())(int, int)
{
	return (&mul);
}

int (*(*b())())(int, int)
{
	return (&nfunc);
}

int	main(void)
{
	int	(*func)(int, int) = b()();

	printf("%d\n", func(3, 4));
	return (0);
}
