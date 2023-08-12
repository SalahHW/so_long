# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/08/12 01:49:08 by sbouheni         ###   ########.fr        #
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
					src/game_utils/texture.c									\
					src/game_utils/movement.c									\
					src/game_utils/block_type.c									\
					src/game_utils/position.c									\
					src/game_utils/event.c										\
					src/rendering/render.c										\
					src/rendering/draw_ground.c									\
					src/rendering/draw_wall.c									\
					src/rendering/draw_item.c									\
					src/rendering/draw_enemy.c									\
					src/rendering/draw_player.c									\
					src/rendering/draw_portal.c									\


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
