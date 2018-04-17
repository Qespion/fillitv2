/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:11:05 by groussel          #+#    #+#             */
/*   Updated: 2018/04/17 23:17:53 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checkchars(char *square)
{
	int		i;
	int		dot;
	int		rl;
	int		sharpe;

	i = -1;
	dot = 12;
	rl = 4;
	sharpe = 4;
	while (square[++i])
	{
		if (square[i] == '.')
			dot--;
		if (square[i] == '\n')
			rl--;
		if (square[i] == '#')
			sharpe--;
	}
	if (dot == 0 && rl == 0 && sharpe == 0 && square[4] == '\n'
			&& square[9] == '\n' && square[14] == '\n' && square[19] == '\n')
		return (1);
	return (0);
}

int		checkshape(char *square)
{
	int		(*f[7])(char **tab);
	char	**tab;
	int		i;

	if (!checkchars(square))
		return (-1);
	tab = ft_strsplit(square, '\n');
	f[0] = checkI;
	f[1] = checkJ;
	f[2] = checkL;
	f[3] = checkO;
	f[4] = checkS;
	f[5] = checkT;
	f[6] = checkZ;
	i = -1;
	while (++i < 7)
		if (f[i](tab) >= 0)
			return (1);
return (0);
}

int		**putsquare(char *square)
{
	int		i;
	int		j;
	int		**tab;

	i = -1;
	if (!(tab = malloc(sizeof(tab) * 4)))
		return (NULL);
	while (++i < 4)
	{
		if (!(tab[i] = malloc(sizeof(*tab) * 2)))
			return (NULL);
	}
	i = -1;
	j = 0;
	while (square[++i])
	{
		if (square[i] == '#')
		{
			tab[j][0] = i / 5;
			tab[j][1] = i % 5;
			j++;
		}

	}
	return (tab);
}

int		**maketab(char *square)
{
	char	**platforme;
	int		**tab;
	int		i;

	if (!checkchars(square))
		return (NULL);
	i = -1;
	if (!checkshape(square))
		return (NULL);
	if (!(tab = putsquare(square)))
		return (NULL);
	return (tab);
}

int		checkfile(t_shapes *shapes, char **square, int fd)
{
	int		bytes;
	char	space;
	int		i;

	i = -1;
	while ((bytes = read(fd, *square, 20)) > 0)
	{
		if ((shapes[++i].tab = maketab(*square)) != NULL)
		{
			shapes[i].letter = 'A' + i;
			shapes[i].set = 0;
		}
		else
			ft_strerror(shapes, *square, fd, 2);
		if ((bytes = read(fd, &space, 1)) > 0)
			;
	}
	return (1);
}