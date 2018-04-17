/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groussel <groussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:03:12 by groussel          #+#    #+#             */
/*   Updated: 2018/04/17 22:48:17 by groussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h> 	// exit, malloc, free
# include <fcntl.h>		// open
# include <unistd.h>	// read, write, close
# include <stdio.h>		// printf

typedef struct		s_shapes
{
    int				**tab;
    int				set;
    int				letter;
}					t_shapes;

int		ft_sqrt(int nb);
int		checkfile(t_shapes *shapes, char **square, int fd);
void	ft_strerror(t_shapes *shapes, char *square, int fd, int code);
int		checkI(char **tab);
int		checkIN(char **tab);
int		checkIE(char **tab);
int		checkJ(char **tab);
int		checkJN(char **tab);
int		checkJE(char **tab);
int		checkJS(char **tab);
int		checkJW(char **tab);
int		checkL(char **tab);
int		checkLN(char **tab);
int		checkLE(char **tab);
int		checkLS(char **tab);
int		checkLW(char **tab);
int		checkO(char **tab);
int		checkON(char **tab);
int		checkT(char **tab);
int		checkTN(char **tab);
int		checkTE(char **tab);
int		checkTS(char **tab);
int		checkTW(char **tab);
int		checkS(char **tab);
int		checkSN(char **tab);
int		checkSE(char **tab);
int		checkZ(char **tab);
int		checkZN(char **tab);
int     checkZE(char **tab);

#endif