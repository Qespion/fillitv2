/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrii.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 20:10:44 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:42:00 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checki(char **tab)
{
	if (checkin(tab))
		return (0);
	if (checkie(tab))
		return (1);
	return (-1);
}

/*
** ####
*/

int		checkin(char **tab)
{
	int		y;

	y = -1;
	while (++y < 4)
	{
		if (tab[y][0] == '#' && tab[y][1] == '#' && tab[y][2] == '#'
				&& tab[y][3] == '#')
			return (1);
	}
	return (0);
}

/*
** #
** #
** #
** #
*/

int		checkie(char **tab)
{
	int		x;

	x = -1;
	while (++x < 4)
	{
		if (tab[0][x] == '#' && tab[1][x] == '#' && tab[2][x] == '#'
				&& tab[3][x] == '#')
			return (1);
	}
	return (0);
}
