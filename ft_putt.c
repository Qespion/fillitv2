/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:57:21 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 14:02:02 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
**  #
** ###
*/

int	ft_puttn(int x, int y, char **map)
{
	int is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
** #
** ##
** #
*/

int	ft_putte(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
** ###
**  #
*/

int	ft_putts(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
**  #
** ##
**  #
*/

int	ft_puttw(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putt(t_pos *xy, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_puttn(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 1)
		is_valid = ft_putte(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 2)
		is_valid = ft_putts(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 3)
		is_valid = ft_puttw(xy->x, xy->y, map);
	if (is_valid == 1)
		return (1);
	return (0);
}
