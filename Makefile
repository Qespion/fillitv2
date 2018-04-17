# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groussel <groussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/07 16:25:30 by groussel          #+#    #+#              #
#    Updated: 2018/04/17 17:24:50 by groussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

FLAGS	=	-Wall -Wextra -Werror

LIB_DIR	=	libft/

SRCS	=	main.c		\
			check.c		\
			find.c		\
			ft_solve.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):
			make -C libft/
			gcc $(FLAGS) $(OBJS) -L libft/ -lft -o $(NAME)

clean:
			make -C libft/ clean
			rm -f $(OBJS)

fclean:		clean
			make -C libft/ fclean
			rm -f $(NAME)

re:			fclean all
