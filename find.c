/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 03:52:17 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:37:05 by oespion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char	**ft_bigger_pg(char **map)
{
	int		size;
	char	**n_map;
	int		r;
	int		i;

	i = 0;
	size = 0;
	while (map[size])
		size++;
	size++;
	ft_free_tab(map);
	if (!(n_map = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		r = 0;
		if (!(n_map[i] = (char*)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		while (r < size)
			n_map[i][r++] = '.';
		n_map[i][r] = '\0';
		i++;
	}
	n_map[i] = NULL;
	return (n_map);
}

char	**ft_playground(int p_nbr)
{
	int		base;
	int		r;
	int		i;
	char	**tab;

	r = 0;
	i = 0;
	base = p_nbr * 4;
	while (ft_sqrt(base) == 0)
		base++;
	base = ft_sqrt(base);
	if (!(tab = (char**)malloc(sizeof(char*) * (base + 1))))
		return (NULL);
	while (i < base)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * (base + 1))))
			return (NULL);
		while (r < base)
			tab[i][r++] = '.';
		tab[i][r] = '\0';
		i++;
		r = 0;
	}
	tab[i] = NULL;
	return (tab);
}

int		ft_is_valid(char **map, int x, int y)
{
	int	r;

	r = ft_strlen(map[0]);
	if (x >= r || y >= r || x < 0 || y < 0)
		return (0);
	if (map[y][x] == '.')
		return (1);
	return (0);
}

int		ft_trypiece(t_shapes *shapes, char **map, int p_nbr, t_pos *xy)
{
	int valid;

	valid = 0;
	if (shapes[p_nbr].shape == 0)
		valid = ft_puti(xy, map, shapes, p_nbr);
	else if (shapes[p_nbr].shape == 1)
		valid = ft_putj(xy, map, shapes, p_nbr);
	else if (shapes[p_nbr].shape == 2)
		valid = ft_putl(xy, map, shapes, p_nbr);
	else if (shapes[p_nbr].shape == 3)
		valid = ft_puto(xy->x, xy->y, map);
	else if (shapes[p_nbr].shape == 4)
		valid = ft_puts(xy, map, shapes, p_nbr);
	else if (shapes[p_nbr].shape == 5)
		valid = ft_putt(xy, map, shapes, p_nbr);
	else if (shapes[p_nbr].shape == 6)
		valid = ft_putz(xy, map, shapes, p_nbr);
	return (valid);
}

int		start(t_shapes *shapes)
{
	char	**map;
	int		p_nbr;
	t_pos	*xy;

	if (!(xy = (t_pos*)malloc(sizeof(xy))))
		return (0);
	xy->x = 0;
	xy->y = 0;
	p_nbr = 0;
	while (shapes[p_nbr].shape != -1)
		p_nbr++;
	map = ft_playground(p_nbr);
	ft_solve(map, shapes, 0, xy);
	return (0);
}
