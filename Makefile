# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/07/14 15:41:17 by sbouheni         ###   ########.fr        #
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

SRCS			=	src/so_long.c src/parser.c src/error/arg_error.c			\
					src/map_build.c												\
					src/list_utils/push.c

all				:	$(NAME)

$(NAME)			:	$(SRCS) $(LIBFT)
	$(COMPILE) $(HEADER) $(SRCS) -L./libft/ -lft -o $(NAME)

$(LIBFT)		:
	make -C libft

clean			:
	rm -f $(NAME)
	cd ./libft && make $@

fclean			:	clean
	cd ./libft && make $@

re				:	fclean all

debug			:	$(SRCS) $(LIBFT)
	$(DEBUG) $(HEADER) $(SRCS) -L./libft/ -lft -o $(NAME)
