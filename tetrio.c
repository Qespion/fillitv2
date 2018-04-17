/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:07:30 by groussel          #+#    #+#             */
/*   Updated: 2018/04/15 19:29:10 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TODO:	[X] Check north
**
** FIXME:	[X] Segv
*/

#include "fillit.h"
#include "libft.h"

int		checkO(char **tab)
{
	if (checkON(tab))
		return (0);
	return (-1);
}

/* ##
** ##
*/
int		checkON(char **tab)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 3)
	{
		x = -1;
		while (++x < 3)
		{
			if (tab[y][x] == '#' && tab[y][x + 1] == '#' &&
					tab[y + 1][x] == '#' && tab[y + 1][x + 1] == '#')
				return (1);
		}
	}
	return (0);
}