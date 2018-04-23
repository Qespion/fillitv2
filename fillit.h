/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/19 14:06:47 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_shapes
{
	int			shape;
	int			x;
	int			y;
	int			direction;
	int			set;
	int			letter;
}				t_shapes;

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_pos;

/*
** Main.c
*/

void			ft_strerror(t_shapes *shapes, char *square, int fd, int code);
int				setmap(char ***map);

/*
** Check.c
*/

int				checkfile(t_shapes *shapes, char **square, int fd);
int				checkshape(char *square);
int				checkdir(char *square);
int				checkchars(char *square);

/*
** Find.c
*/

int				start(t_shapes *shapes);

/*
** Tetrii.c
*/

int				checki(char **tab);
int				checkin(char **tab);
int				checkie(char **tab);

/*
** Tetrij.c
*/

int				checkj(char **tab);
int				checkjn(char **tab);
int				checkje(char **tab);
int				checkjs(char **tab);
int				checkjw(char **tab);

/*
** Tetril.c
*/

int				checkl(char **tab);
int				checkln(char **tab);
int				checkle(char **tab);
int				checkls(char **tab);
int				checklw(char **tab);

/*
** Tetrio.c
*/

int				checko(char **tab);
int				checkon(char **tab);

/*
** Tetrit.c
*/

int				checkt(char **tab);
int				checktn(char **tab);
int				checkte(char **tab);
int				checkts(char **tab);
int				checktw(char **tab);

/*
** Tetris.c
*/

int				checks(char **tab);
int				checksn(char **tab);
int				checkse(char **tab);

/*
** Tetriz.c
*/

int				checkz(char **tab);
int				checkzn(char **tab);
int				checkze(char **tab);

/*
** Test on tab
*/

int				ft_putt(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_puts(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_putz(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_puto(int x, int y, char **map);
int				ft_putl(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_putj(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_puti(t_pos *xy, char **map, t_shapes *shapes, int p_nbr);
int				ft_is_valid(char **map, int x, int y);
int				ft_sqrt(int nb);

/*
** Write functions
*/

void			ft_wrti(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrts(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrtt(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrtz(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrto(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrtl(char **map, t_shapes *shapes, int p_nbr);
void			ft_wrtj(char **map, t_shapes *shapes, int p_nbr);

/*
** Solve
*/

void			ft_solve(char **map, t_shapes *shapes, int p_nbr, t_pos *xy);
char			**ft_bigger_pg(char **map);
void			ft_free_tab(char **tab);
int				ft_trypiece(t_shapes *shapes, char **map, int p_nbr, t_pos *xy);
void			ft_mod_tab(char **map, t_shapes *shapes, int p_nbr);
void			ft_print(char **map);

#endif
