/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:09:25 by afeuerst          #+#    #+#             */
/*   Updated: 2016/12/06 14:51:36 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_check_l(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 2][a.r] == '.' && grid[a.c + 2][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_lr(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 2][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_lo(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 2] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 1][a.r + 2] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_lor(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c][a.r + 2] == '.' && grid[a.c + 1][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_s(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 1] == '.' && grid[a.c][a.r + 2] == '.' &&
		grid[a.c + 1][a.r] == '.' && grid[a.c + 1][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_z(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 1][a.r + 2] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_sr(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 2][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_zr(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 1] == '.' && grid[a.c + 1][a.r + 1] == '.' &&
		grid[a.c + 1][a.r] == '.' && grid[a.c + 2][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_o(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_iv(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 2][a.r] == '.' && grid[a.c + 3][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_ih(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c][a.r + 2] == '.' && grid[a.c][a.r + 3] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_t(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c][a.r + 2] == '.' && grid[a.c + 1][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_tr(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 1] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 1][a.r + 2] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_to(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 2][a.r] == '.' && grid[a.c + 1][a.r + 1] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_tor(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 1] == '.' && grid[a.c + 1][a.r + 1] == '.' &&
		grid[a.c + 2][a.r + 1] == '.' && grid[a.c + 1][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_j(t_anchor a, char **grid)
{
	if (grid[a.c][a.r + 1] == '.' && grid[a.c + 1][a.r + 1] == '.' &&
		grid[a.c + 2][a.r + 1] == '.' && grid[a.c + 2][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_jr(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c + 1][a.r] == '.' && grid[a.c + 2][a.r] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_jo(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c][a.r + 1] == '.' &&
		grid[a.c][a.r + 2] == '.' && grid[a.c + 1][a.r + 2] == '.')
	{
		return (1);
	}
	return (0);
}

int		ft_check_jor(t_anchor a, char **grid)
{
	if (grid[a.c][a.r] == '.' && grid[a.c + 1][a.r] == '.' &&
		grid[a.c + 1][a.r + 1] == '.' && grid[a.c + 1][a.r + 2] == '.')
	{
		return (1);
	}
	return (0);
}
