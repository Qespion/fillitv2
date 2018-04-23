/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:23:00 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:46:25 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtin(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 2] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 3] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 2] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 3] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtie(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 3][shapes[p_nbr].x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 3][shapes[p_nbr].x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrti(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtin(map, shapes, p_nbr);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtie(map, shapes, p_nbr);
}
