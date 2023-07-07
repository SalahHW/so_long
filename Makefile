# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 21:30:47 by sbouheni          #+#    #+#              #
#    Updated: 2023/07/07 21:35:27 by sbouheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
DEBUGFLAGS		=	-g -fsanitize=address
COMPILE			=	$(CC) $(CFLAGS)
DEBUG			=	$(CC) $(DEBUGFLAGS)
NAME			=	so_long

SRCS			=

OBJS			=	$(SRCS:.c=.o)

all				:	$(NAME)

$(NAME)			:	$(SRCS)
	
