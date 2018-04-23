/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:26:44 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:40:48 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checkz(char **tab)
{
	if (checkzn(tab))
		return (0);
	if (checkze(tab))
		return (1);
	return (-1);
}

/*
**  #
** ##
** #
*/

int		checkzn(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 2)
	{
		x = 0;
		while (++x < 4)
		{
			if (tab[y][x] == '#' && tab[y + 1][x] == '#' &&
					tab[y + 1][x - 1] == '#' && tab[y + 2][x - 1] == '#')
				return (1);
		}
	}
	return (0);
}

/*
** ##
**  ##
*/

int		checkze(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 3)
	{
		x = -1;
		while (++x < 2)
		{
			if (tab[y][x] == '#' && tab[y][x + 1] == '#' &&
					tab[y + 1][x + 1] == '#' && tab[y + 1][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}
