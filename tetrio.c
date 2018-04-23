/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:07:30 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 13:39:28 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checko(char **tab)
{
	if (checkon(tab))
		return (0);
	return (-1);
}

/*
** ##
** ##
*/

int		checkon(char **tab)
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
