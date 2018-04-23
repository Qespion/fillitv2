/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrij.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:25:40 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:41:30 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checkj(char **tab)
{
	if (checkjn(tab))
		return (0);
	if (checkje(tab))
		return (1);
	if (checkjs(tab))
		return (2);
	if (checkjw(tab))
		return (3);
	return (-1);
}

/*
**  #
**  #
** ##
*/

int		checkjn(char **tab)
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
					tab[y + 2][x] == '#' && tab[y + 2][x - 1] == '#')
				return (1);
		}
	}
	return (0);
}

/*
** #
** ###
*/

int		checkje(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 3)
	{
		x = -1;
		while (++x < 2)
		{
			if (tab[y][x] == '#' && tab[y + 1][x] == '#' &&
					tab[y + 1][x + 1] == '#' && tab[y + 1][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}

/*
** ##
** #
** #
*/

int		checkjs(char **tab)
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
					tab[y + 1][x] == '#' && tab[y + 2][x] == '#')
				return (1);
		}
	}
	return (0);
}

/*
** ###
**   #
*/

int		checkjw(char **tab)
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
					tab[y][x + 2] == '#' && tab[y + 1][x + 2] == '#')
				return (1);
		}
	}
	return (0);
}
