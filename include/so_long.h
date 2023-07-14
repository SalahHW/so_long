/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 19:38:10 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>

typedef struct s_map_elem_count
{
	int				start;
	int				exit;
	int				item;
}					t_map_elem_count;

typedef struct s_map
{
	char			*line;
	struct s_map	*next;
	struct s_map	*prev;
}					t_map;

typedef struct s_map_edge
{
	t_map			*first;
	t_map			*last;
}					t_map_edge;

//		parser.c				//
void				parse_argument(int argc, char **argv);
void				parse_map(int fd);
//		error/exit_error.c		//
void				printed_exit_error(char *msg);
//		map_utils/read_map.c	//
t_map_edge			*read_map(int fd);
//		list_utils/push.c		//
void				push_front(t_map_edge *list, char *line);
//		list_utils/init.c		//
void				init(t_map_edge *list);
