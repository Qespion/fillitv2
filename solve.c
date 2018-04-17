/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:19:13 by oespion           #+#    #+#             */
/*   Updated: 2018/04/17 22:23:33 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_print(char **map)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (map[r])
	{
		while (map[r][i])
		{
			ft_putchar(map[r][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		r++;
	}
}

void	ft_mod_tab(char **map, t_shapes *shapes, int p_nbr)
{
	int	i;
	int max;

	while (!shapes[max].letter)
		max++;
	i = 0;
	if (shapes[p_nbr].set == 1)
	{
		while (i < max)
		{
			map[shapes->tab[i][0]][shapes->tab[i][1]] = '.';
			i++;
		}
		shapes[p_nbr].set = 0;
	}
	else if (shapes[p_nbr].set == 0)
	{
		while (i < max)
		{
			map[shapes->tab[i][0]][shapes->tab[i][1]] = shapes->letter;
			i++;
		}
		shapes[p_nbr].set = 1;
	}
}

void	ft_solve(char **map, t_shapes *shapes, int nb, t_struct *xy)
{
	int	len;
	int	l;

	l = 0;
	len = ft_strlen(map[0]);
	if (ft_is_valid(map, shapes, nb, *xy) == 0)
	{
		xy->x++;
		if (xy->x >= len)
		{
			xy->y++;
			xy->x = 0;
		}
		if (xy->y >= len && shapes[nb].letter == 'A')
		{
			map = ft_bigger_pg(map);
			xy->y = 0;
			xy->x = 0;
		}
		if (xy->y >= len)
		{
			nb--;
			xy->x += 1;
			while (l < 3)
			{
				shapes[nb].tab[l][0] -= shapes[nb].tab[0][0];
				shapes[nb].tab[l][1] -= shapes[nb].tab[0][1];
				l++;
			}
			shapes[nb].tab[0][0] = 0;
			shapes[nb].tab[0][1] = 0;
		}
		ft_solve(map, shapes, nb, xy);
	}
	l = 0;
	if (ft_is_valid(map, shapes, nb, *xy) == 1)
	{
		while (l < 4)
		{
			shapes[nb].tab[l][0] += xy->x;
			shapes[nb].tab[l][1] += xy->y;
			l++;
		}
		ft_mod_tab(map, shapes, nb);
		ft_solve(map, shapes, nb, xy);
	}
	if (!shapes[nb].letter)
		ft_print(map);
}
