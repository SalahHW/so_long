# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/07/26 20:59:43 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
DEBUGFLAGS		=	-g
COMPILE			=	$(CC) $(CFLAGS)
DEBUG			=	$(CC) $(DEBUGFLAGS)
NAME			=	so_long
LIBFT			=	libft/libft.a
LIBMLX			=	minilibx/libmlx_Linux.a
HEADER			=	include/so_long.h

SRCS			=	src/so_long.c												\
					src/parser.c 												\
					src/parser_utils/check_arg.c								\
					src/parser_utils/element.c									\
					src/parser_utils/format.c									\
					src/parser_utils/closing.c									\
					src/parser_utils/check_doability.c							\
					src/error/printed_exit_error.c								\
					src/map_utils/read_map.c									\
					src/map_utils/init.c										\
					src/map_utils/copy.c										\
					src/map_utils/clear.c										\
					src/game_utils/launch.c										\


all				:	$(NAME)

$(NAME)			:	$(SRCS) $(LIBFT)
	$(COMPILE) $(HEADER) $(SRCS) -L./libft/ -lft -L./minilibx/ -lmlx -lXext -lX11 -o $(NAME)

$(LIBFT)		:
	make -C libft

clean			:
	rm -f $(NAME)
	cd ./libft && make $@

fclean			:	clean
	cd ./libft && make $@

re				:	fclean all

debug			:	$(SRCS) $(LIBFT)
	$(DEBUG) $(HEADER) $(SRCS) -L./libft/ -lft -L./minilibx/ -lmlx -lXext -lX11 -o $(NAME)
