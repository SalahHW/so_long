/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 02:04:19 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_map_elem_count
{
	int start;
	int	exit;
	int item;
} t_map_elem_count;

//		parser.c		//
void	parse_argument(int argc, char **argv);
void	parse_map(int fd);
//		map_parser.c	//
//		exit_error.c
void	printed_exit_error(char *msg);
