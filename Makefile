# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/07/07 23:38:45 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
DEBUGFLAGS		=	-g -fsanitize=address
COMPILE			=	$(CC) $(CFLAGS)
DEBUG			=	$(CC) $(DEBUGFLAGS)
NAME			=	so_long
HEADER			=	include/so_long.h

SRCS			=	src/so_long.c src/parser.c src/error/arg_error.c

all				:	$(NAME)

$(NAME)			:	$(SRCS)
	$(COMPILE) $(HEADER) $(SRCS) -o $(NAME)

clean			:
	rm -f $(NAME)

fclean			:	clean

re				:	fclean all

debug			:
	$(DEBUG) $(HEADER) $(SRCS) -o $(NAME)
