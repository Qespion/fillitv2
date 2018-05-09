/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 21:19:09 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:40:07 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
**  #
**  #
** ##
*/

int	ft_putjn(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 2);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
**	#
**  ###
*/

int	ft_putjs(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
**  ##
**  #
**  #
*/

int	ft_putje(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
**	###
**    #
*/

int	ft_putjw(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putj(t_pos *xy, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putjn(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 1)
		is_valid = ft_putje(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 2)
		is_valid = ft_putjs(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 3)
		is_valid = ft_putjw(xy->x, xy->y, map);
	return (is_valid);
}
