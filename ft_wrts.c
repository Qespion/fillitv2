/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:32:34 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 14:09:08 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_wrtsv(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y + 2][shapes[p_nbr].x + 1] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrtsh(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].set == 0)
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = shapes[p_nbr].letter;
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = shapes[p_nbr].letter;
		shapes[p_nbr].set = 1;
	}
	else
	{
		map[shapes[p_nbr].y][shapes[p_nbr].x] = '.';
		map[shapes[p_nbr].y][shapes[p_nbr].x + 1] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x - 1] = '.';
		map[shapes[p_nbr].y + 1][shapes[p_nbr].x] = '.';
		shapes[p_nbr].set = 0;
	}
}

void	ft_wrts(char **map, t_shapes *shapes, int p_nbr)
{
	if (shapes[p_nbr].direction == 0)
		ft_wrtsv(map, shapes, p_nbr);
	else if (shapes[p_nbr].direction == 1)
		ft_wrtsh(map, shapes, p_nbr);
}
