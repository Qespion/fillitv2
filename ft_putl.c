/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 09:08:53 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:30:31 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_putln(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 2);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putle(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putls(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putlw(int x, int y, char **map)
{
	int	is_valid;

	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 2, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putl(t_pos *xy, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putln(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 1)
		is_valid = ft_putle(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 2)
		is_valid = ft_putls(xy->x, xy->y, map);
	if (shapes[p_nbr].direction == 3)
		is_valid = ft_putlw(xy->x, xy->y, map);
	return (is_valid);
}
