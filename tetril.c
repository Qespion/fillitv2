/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetril.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:56:53 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:39:39 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checkl(char **tab)
{
	if (checkln(tab))
		return (0);
	if (checkle(tab))
		return (1);
	if (checkls(tab))
		return (2);
	if (checklw(tab))
		return (3);
	return (-1);
}

/*
** #
** #
** ##
*/

int		checkln(char **tab)
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

/*
** ###
** #
*/

int		checkle(char **tab)
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

/*
** ##
**  #
** 	#
*/

int		checkls(char **tab)
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

/*
**   #
** ###
*/

int		checklw(char **tab)
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
