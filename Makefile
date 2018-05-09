# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groussel <groussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 16:25:30 by groussel          #+#    #+#              #
#    Updated: 2018/04/22 11:17:52 by groussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

FLAGS	=	-Wall -Wextra -Werror

LIB_DIR	=	libft/

SRCS	=	main.c		\
			check.c		\
			find.c		\
			tetrii.c	\
			tetrij.c	\
			tetril.c	\
			tetrio.c	\
			tetrit.c	\
			tetris.c	\
			tetriz.c	\
			ft_puti.c	\
			ft_putj.c	\
			ft_putl.c	\
			ft_puto.c	\
			ft_puts.c	\
			ft_putt.c	\
			ft_putz.c	\
			ft_sqrt.c	\
			ft_wrti.c	\
			ft_wrtj.c	\
			ft_wrtl.c	\
			ft_wrto.c	\
			ft_wrts.c	\
			ft_wrtt.c	\
			ft_wrtz.c	\
			ft_solve.c	\
			ft_putchar.c\
			ft_putendl.c\
			ft_strjoin.c\
			ft_strlen.c	\
			ft_strnew.c	\
			ft_strdup.c	\
			ft_strsub.c	\
			ft_bzero.c	\
			ft_strcat.c	\
			ft_strncpy.c\
			ft_strsplit.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			gcc $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
			gcc $(FLAGS) -c $< -o $@ -I .

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
