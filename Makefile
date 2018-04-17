# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groussel <groussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 16:25:30 by groussel          #+#    #+#              #
#    Updated: 2018/04/17 22:52:20 by groussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

FLAGS	=	-Wall -Wextra -Werror

LIB_DIR	=	libft/

SRCS	=	main.c		\
			check.c		\
			ft_sqrt.c	\
			tetrii.c	\
			tetrij.c	\
			tetril.c	\
			tetrio.c	\
			tetris.c	\
			tetrit.c	\
			tetriz.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C libft/
			gcc $(FLAGS) $(OBJS) -L libft/ -lft -o $(NAME)

clean:
			make -C libft/ clean
			rm -f $(OBJS)

fclean:		clean
			make -C libft/ fclean
			rm -f $(NAME)

re:			fclean all
