# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/08/16 23:44:43 by sbouheni         ###   ########.fr        #
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
					src/end_game/game_close.c									\
					src/end_game/printed_exit_error.c							\
					src/end_game/free_all.c										\
					src/map_utils/read_map.c									\
					src/map_utils/init.c										\
					src/map_utils/copy.c										\
					src/game_utils/launch.c										\
					src/game_utils/movement.c									\
					src/game_utils/block_type.c									\
					src/game_utils/position.c									\
					src/game_utils/event.c										\
					src/rendering/load_texture.c								\
					src/rendering/load_enemy_texture.c							\
					src/rendering/load_ground_texture.c							\
					src/rendering/load_item_texture.c							\
					src/rendering/load_player_texture.c							\
					src/rendering/load_portal_texture.c							\
					src/rendering/load_wall_texture.c							\
					src/rendering/render_window.c										\
					src/rendering/render_ground.c								\
					src/rendering/render_wall.c									\
					src/rendering/draw_item.c									\
					src/rendering/enemy_enemy.c									\
					src/rendering/draw_player.c									\
					src/rendering/draw_portal.c									\
					src/rendering/animation.c									\


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
