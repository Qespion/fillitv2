/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:42:19 by groussel          #+#    #+#             */
/*   Updated: 2018/04/22 11:51:14 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		checkfile(t_shapes *shapes, char **square, int fd)
{
	int		bytes;
	char	space;
	int		i;

	i = -1;
	while ((bytes = read(fd, *square, 20)) > 0)
	{
		if ((shapes[++i].shape = checkshape(*square)) >= 0 && bytes == 20)
		{
			shapes[i].x = 0;
			shapes[i].y = 0;
			shapes[i].direction = checkdir(*square);
			shapes[i].set = 0;
			if (i >= 26)
				ft_strerror(shapes, *square, fd, 2);
			shapes[i].letter = 'A' + i;
		}
		else
			ft_strerror(shapes, *square, fd, 2);
		if ((bytes = read(fd, &space, 1)) > 0)
			;
	}
	shapes[++i].shape = -1;
	return (1);
}

int		checkshape(char *square)
{
	int		(*f[7])(char **tab);
	char	**tab;
	int		i;

	if (!checkchars(square))
		return (-1);
	tab = ft_strsplit(square, '\n');
	f[0] = checki;
	f[1] = checkj;
	f[2] = checkl;
	f[3] = checko;
	f[4] = checks;
	f[5] = checkt;
	f[6] = checkz;
	i = -1;
	while (++i < 7)
		if (f[i](tab) >= 0)
			return (i);
	return (-1);
}

int		checkdir(char *square)
{
	int		(*f[7])(char **tab);
	char	**tab;
	int		i;
	int		result;

	tab = ft_strsplit(square, '\n');
	f[0] = checki;
	f[1] = checkj;
	f[2] = checkl;
	f[3] = checko;
	f[4] = checks;
	f[5] = checkt;
	f[6] = checkz;
	i = -1;
	while (++i < 7)
		if ((result = f[i](tab)) >= 0)
			return (result);
	return (-1);
}

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
