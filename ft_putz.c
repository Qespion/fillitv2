/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 15:06:32 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:45:38 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
**  #
** ##
** #
*/

int	ft_putzn(int x, int y, char **map)
{
	int	i;
	int is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x - 1, y + 2);
	if (is_valid == 1)
		return (1);
	return (0);
}

/*
** ##
**  ##
*/

int	ft_putzh(int x, int y, char **map)
{
	int	i;
	int is_valid;

	i = 0;
	is_valid = ft_is_valid(map, x, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 1, y + 1);
	if (is_valid == 1)
		is_valid = ft_is_valid(map, x + 2, y + 1);
	if (is_valid == 1)
		return (1);
	return (0);
}

int	ft_putz(t_pos *xy, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putzn(xy->x, xy->y, map);
	else if (shapes[p_nbr].direction == 1)
		is_valid = ft_putzh(xy->x, xy->y, map);
	if (is_valid == 1)
		return (1);
	return (0);
}
