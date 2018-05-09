/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:58:26 by oespion           #+#    #+#             */
/*   Updated: 2018/04/19 13:29:55 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_putin(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	is_valid = 1;
	i = -1;
	while (++i < 4 && ft_is_valid(map, x, y))
		x++;
	if (i == 4)
		return (1);
	return (0);
}

int	ft_putie(int x, int y, char **map)
{
	int	i;
	int	is_valid;

	is_valid = 1;
	i = -1;
	while (++i < 4 && ft_is_valid(map, x, y))
		y++;
	if (i == 4)
		return (1);
	return (0);
}

int	ft_puti(t_pos *xy, char **map, t_shapes *shapes, int p_nbr)
{
	int	is_valid;

	is_valid = 0;
	if (shapes[p_nbr].direction == 0)
		is_valid = ft_putin(xy->x, xy->y, map);
	else if (shapes[p_nbr].direction == 1)
		is_valid = ft_putie(xy->x, xy->y, map);
	if (is_valid == 1)
		return (1);
	return (0);
}
