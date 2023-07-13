# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/07/13 03:02:07 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
DEBUGFLAGS		=	-g -fsanitize=address
COMPILE			=	$(CC) $(CFLAGS)
DEBUG			=	$(CC) $(DEBUGFLAGS)
NAME			=	so_long
LIBFT			=	libft/libft.a
HEADER			=	include/so_long.h

SRCS			=	src/so_long.c src/parser.c src/error/arg_error.c

all				:	$(NAME)

$(NAME)			:	$(SRCS) $(LIBFT)
	make -C libft
	$(COMPILE) $(HEADER) $(SRCS) -L./libft/ -lft -o $(NAME)

clean			:
	rm -f $(NAME)
	cd ./libft && make clean

fclean			:	clean

re				:	fclean all

debug			:
	$(DEBUG) $(HEADER) $(SRCS) -L./libft/ -lft -o $(NAME)
