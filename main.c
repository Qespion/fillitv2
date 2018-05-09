/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:43:56 by groussel          #+#    #+#             */
/*   Updated: 2018/04/22 11:46:18 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void	ft_print(char **map)
{
	int	r;
	int	i;

	r = 0;
	i = 0;
	while (map[r])
	{
		while (map[r][i])
		{
			ft_putchar(map[r][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		r++;
	}
}

void	ft_strerror(t_shapes *shapes, char *square, int fd, int code)
{
	if (code == 1)
		ft_putendl("usage: ./fillit source_file");
	else
		ft_putendl("error");
	free(shapes);
	free(square);
	close(fd);
	exit(EXIT_FAILURE);
}

int		check_empty_or_bad_ending(int fd, t_shapes *shapes)
{
	char	str[2];
	char	*result;
	int		firstime;

	firstime = 0;
	while (read(fd, str, 1) > 0)
	{
		str[1] = '\0';
		if (!firstime)
			result = ft_strdup(str);
		if (!(result = ft_strjoin(result, str)))
			return (0);
		firstime++;
	}
	if (firstime == 0)
		ft_strerror(shapes, result, fd, 2);
	firstime = ft_strlen(result);
	if (firstime < 20)
		ft_strerror(shapes, result, fd, 2);
	if (result[firstime - 1] == '\n' && result[firstime - 2] == '\n')
		ft_strerror(shapes, result, fd, 2);
	return (1);
}

int		main(int ac, char **av)
{
	t_shapes		*shapes;
	char			*square;
	int				fd;

	if (!(shapes = (t_shapes *)malloc(sizeof(*shapes) * 27)))
		return (EXIT_FAILURE);
	if (!(square = ft_strnew(20)))
		return (EXIT_FAILURE);
	if (ac != 2)
		ft_strerror(shapes, square, 0, 1);
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_strerror(shapes, square, fd, 2);
	if (!check_empty_or_bad_ending(fd, shapes))
		return (0);
	close(fd);
	if ((fd = open(av[1], O_RDONLY)) < 0)
		ft_strerror(shapes, square, fd, 2);
	if (!checkfile(shapes, &square, fd))
		ft_strerror(shapes, square, fd, 2);
	start(shapes);
	close(fd);
	return (EXIT_SUCCESS);
}
