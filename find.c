/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:07:40 by oespion           #+#    #+#             */
/*   Updated: 2018/04/17 22:16:13 by oespion          ###   ########.fr       */
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

int	ft_is_valid(char **map, t_shapes *shapes, int nb, t_struct xy)
{
	int	r;
	int	i;

	i = 0;
	r = ft_strlen(map[0]);
	while (i < 4)
	{
		if (shapes[nb].tab[i][0] < 0 && shapes[nb].tab[i][1] < 0
			&& shapes[nb].tab[i][0] >= r && shapes[nb].tab[i][0] >= r)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (map[shapes[nb].tab[i][0]][shapes[nb].tab[i][1]] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		start(t_shapes *shapes)
{
	char	**map;
	int		p_nbr;
	int		r;
	int		i;
	t_struct	*xy;

	if (!(xy = (t_struct*)malloc(sizeof(xy))))
		return (0);
	xy->x = 0;
	xy->y = 0;
	r = 0;
	i = 0;
	p_nbr = 0;
	while (shapes[p_nbr].letter)
		p_nbr++;
	map = ft_playground(p_nbr);
	ft_solve(map, shapes, 0, xy);
	return (0);
}
