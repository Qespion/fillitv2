/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetril.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:56:53 by groussel          #+#    #+#             */
/*   Updated: 2018/04/15 19:29:04 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check north
**			[X] Check east
**			[X] Check south
**			[X] Check west
**
** FIXME:	[X] Segv
*/

#include "fillit.h"
#include "libft.h"

int		checkL(char **tab)
{
	if (checkLN(tab))
		return (0);
	if (checkLE(tab))
		return (1);
	if (checkLS(tab))
		return (2);
	if (checkLW(tab))
		return (3);
	return (-1);
}

/* #
** #
** ##
*/
int		checkLN(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 2)
	{
		x = -1;
		while (++x < 3)
		{
			if (tab[y][x] == '#' && tab[y + 1][x] == '#' &&
					tab[y + 2][x] == '#' && tab[y + 2][x + 1] == '#')
				return (1);
		}
	}
	return (0);
}

/* ###
** #
*/
int		checkLE(char **tab)
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
					tab[y][x + 2] == '#' && tab[y + 1][x] == '#')
				return (1);
		}
	}
	return (0);
}

/* ##
**  #
** 	#
*/
int		checkLS(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 2)
	{
		x = -1;
		while (++x < 3)
		{
			if (tab[y][x] == '#' && tab[y][x + 1] == '#' &&
					tab[y + 1][x + 1] == '#' && tab[y + 2][x + 1] == '#')
				return (1);
		}
	}
	return (0);
}

/*   #
** ###
*/
int		checkLW(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 3)
	{
		x = 1;
		while (++x < 4)
		{
			if (tab[y][x] == '#' && tab[y + 1][x] == '#' &&
					tab[y + 1][x - 1] == '#' && tab[y + 1][x - 2] == '#')
				return (1);
		}
	}
	return (0);
}
