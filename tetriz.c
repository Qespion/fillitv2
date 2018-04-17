/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:26:44 by groussel          #+#    #+#             */
/*   Updated: 2018/04/15 19:29:38 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check north
**			[X] Check east
**
** FIXME:	[X] Segv
*/

#include "fillit.h"
#include "libft.h"

int		checkZ(char **tab)
{
	if (checkZN(tab))
		return (0);
	if (checkZE(tab))
		return (1);
	return (-1);
}

/*  #
** ##
** #
*/
int		checkZN(char **tab)
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

/* ##
**  ##
*/
int		checkZE(char **tab)
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
