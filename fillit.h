/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/16 18:33:58 by groussel         ###   ########.fr       */
=======
/*   By: oespion <oespion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:43:04 by oespion           #+#    #+#             */
/*   Updated: 2018/04/17 22:22:24 by oespion          ###   ########.fr       */
>>>>>>> v2
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h> 	// exit, malloc, free
# include <fcntl.h>		// open
# include <unistd.h>	// read, write, close
# include <stdio.h>		// printf

<<<<<<< HEAD
typedef struct		s_shapes
{								//  0    1    2    3    4    5    6
	int				shape;		// 'I', 'J', 'L', 'O', 'S', 'T', 'Z'
	int				x;
	int				y;
	int				direction;	// 'N', 'E', 'S', 'W'
	int				set;		// 1 or 0
	int				letter;
}					t_shapes;

/*
** Reset colors
*/
# define C_RESET         "\033[0m"

/*
** Colors
*/
# define CT_MAROON		"\033[38;5;1m"
# define CT_GREEN		"\033[38;5;2m"
# define CT_OLIVE		"\033[38;5;3m"
# define CT_NAVY		"\033[38;5;4m"
# define CT_PURPLE		"\033[38;5;5m"
# define CT_SILVER		"\033[38;5;7m"
# define CT_RED			"\033[38;5;9m"
# define CT_YELLOW		"\033[38;5;11m"
# define CT_FUCHSIA		"\033[38;5;13m"
# define CT_AQUA		"\033[38;5;14m"
# define CT_WHITE		"\033[38;5;15m"
# define CT_DARKBLUE	"\033[38;5;18m"
# define CT_DSKYBLUE4	"\033[38;5;25m"
# define CT_SPRINGREEN4	"\033[38;5;29m"
# define CT_CYAN1		"\033[38;5;51m"
# define CT_PURPLE4		"\033[38;5;54m"
# define CT_MTURQUOISE	"\033[38;5;80m"
# define CT_LIGHTPINK4	"\033[38;5;95m"
# define CT_SLATEBLUE1	"\033[38;5;99m"
# define CT_DEEPPINK4	"\033[38;5;125m"
# define CT_LSTEELBLUE	"\033[38;5;147m"
# define CT_DARKORANGE3	"\033[38;5;166m"
# define CT_SALMON1		"\033[38;5;209m"
# define CT_ORANGE1		"\033[38;5;214m"
# define CT_BLACK		"\033[38;5;232m"
# define CT_THISTLE1	"\033[38;5;225m"

/*
** Backgrounds colors
*/
# define CB_MAROON		"\033[48;5;1m"
# define CB_GREEN		"\033[48;5;2m"
# define CB_OLIVE		"\033[48;5;3m"
# define CB_NAVY		"\033[48;5;4m"
# define CB_PURPLE		"\033[48;5;5m"
# define CB_SILVER		"\033[48;5;7m"
# define CB_RED			"\033[48;5;9m"
# define CB_YELLOW		"\033[48;5;11m"
# define CB_FUCHSIA		"\033[48;5;13m"
# define CB_AQUA		"\033[48;5;14m"
# define CB_WHITE		"\033[48;5;15m"
# define CB_DARKBLUE	"\033[48;5;18m"
# define CB_DSKYBLUE4	"\033[48;5;25m"
# define CB_SPRINGREEN4	"\033[48;5;29m"
# define CB_CYAN1		"\033[48;5;51m"
# define CB_PURPLE4		"\033[48;5;54m"
# define CB_MTURQUOISE	"\033[48;5;80m"
# define CB_LIGHTPINK4	"\033[48;5;95m"
# define CB_SLATEBLUE1	"\033[48;5;99m"
# define CB_DEEPPINK4	"\033[48;5;125m"
# define CB_LSTEELBLUE	"\033[48;5;147m"
# define CB_DARKORANGE3	"\033[48;5;166m"
# define CB_SALMON1		"\033[48;5;209m"
# define CB_ORANGE1		"\033[48;5;214m"
# define CB_BLACK		"\033[48;5;232m"
# define CB_THISTLE1	"\033[48;5;225m"

/*
** Main.c
*/
void	ft_strerror(t_shapes *shapes, char *square, int fd, int code);
int		setmap(char ***map);

/*
** Check.c
*/
int		checkfile(t_shapes *shapes, char **square, int fd);
int		checkshape(char *square);
int		checkdir(char *square);
int		checkchars(char *square);

/*
** Find.c
*/
int		start(t_shapes *shapes);

/*
** Tetrii.c
*/
int		checkI(char **tab);
int		checkIN(char **tab);
int		checkIE(char **tab);
/*
** Tetrij.c
*/
int		checkJ(char **tab);
int		checkJN(char **tab);
int		checkJE(char **tab);
int		checkJS(char **tab);
int		checkJW(char **tab);
/*
** Tetril.c
*/
int		checkL(char **tab);
int		checkLN(char **tab);
int		checkLE(char **tab);
int		checkLS(char **tab);
int		checkLW(char **tab);
/*
** Tetrio.c
*/
int		checkO(char **tab);
int		checkON(char **tab);
/*
** Tetrit.c
*/
int		checkT(char **tab);
int		checkTN(char **tab);
int		checkTE(char **tab);
int		checkTS(char **tab);
int		checkTW(char **tab);
/*
** Tetris.c
*/
int		checkS(char **tab);
int		checkSN(char **tab);
int		checkSE(char **tab);

/*
** Tetriz.c
*/
int		checkZ(char **tab);
int		checkZN(char **tab);
int		checkZE(char **tab);

/*
** Test on tab
*/

int	ft_putT(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_putS(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_putZ(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_putO(int x, int y, char **map);
int	ft_putL(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_putJ(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_putI(int x, int y, char **map, t_shapes *shapes, int p_nbr);
int	ft_is_valid(char **map, int x, int y);
int	ft_sqrt(int nb);

/*
** Write functions
*/

void	ft_wrtI(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtS(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtT(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtZ(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtO(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtL(int x, int y, char **map, t_shapes *shapes, int p_nbr);
void	ft_wrtJ(int x, int y, char **map, t_shapes *shapes, int p_nbr);

/*
** Solve
*/

void	ft_solve(char **map, t_shapes *shapes, int p_nbr, int x, int y);
char	**ft_bigger_pg(char **map);
void	ft_free_tab(char **tab);
int		ft_trypiece(t_shapes *shapes, char **map, int p_nbr, int x, int y);
void	ft_mod_tab(char **map, t_shapes *shapes, int p_nbr);
void	ft_print(char **map);

=======
typedef struct	s_shapes
{
	int			**tab;
	int			set;
	int			letter;
}				t_shapes;

typedef struct	s_struct
{
	int			x;
	int			y;
}				t_struct;

int				start(t_shapes *shapes);
void			ft_solve(char **map, t_shapes *shapes, int nb, t_struct *xy);
void			ft_mod_tab(char **map, t_shapes *shapes, int p_nbr);
char			**ft_bigger_pg(char **map);
char			**ft_playground(int p_nbr);
int				ft_sqrt(int nb);
void			ft_free_tab(char **tab);
void			ft_print(char **map);
int				ft_is_valid(char **map, t_shapes *shapes, int nb, t_struct xy);
>>>>>>> v2
#endif