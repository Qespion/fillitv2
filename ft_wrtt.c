/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrtt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:43:38 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 14:08:04 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrttn(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtte(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtts(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 2] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 2] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrttw(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = '.';
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtt(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrttn(map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 1)
		ft_wrtte(map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 2)
		ft_wrtts(map, shapes, p_nbr);
	if (shapes[p_nbr].direction == 3)
		ft_wrttw(map, shapes, p_nbr);
}
