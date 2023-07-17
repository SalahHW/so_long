/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/17 23:19:07 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_map_attribute
{
	int				height;
	int				width;
	int				start;
	int				exit;
	int				item;
	int				player;
	int				enemy;
	int				x_player_pos;
	int				y_player_pos;
}					t_map_attribute;

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
	t_map_attribute	*attribute;
}					t_map_edge;

//		parser.c
void				parse_argument(int argc, char **argv);
void				parse_map(t_map_edge *map);
//		parser_utils/
void				check_file_format(char *str);
void				check_element(t_map_edge *map);
void				check_format(t_map_edge *map);
void				check_closing(t_map_edge *map);
void				check_doability(t_map_edge *map);
//		error/
void				printed_exit_error(char *msg);
//		map_utils/read_map.c
t_map_edge			*read_map(int fd);
//		map_utils/position.c
void				get_start_pos(t_map_edge *map);
//		list_utils/push.c
void				push_back(t_map_edge *list, char *line);
//		list_utils/init.c
void				init_map(t_map_edge *list);
void				init_attribute(t_map_attribute *list);
//		list_utils/clear.c
void				clear_list(t_map_edge *list);

#endif
