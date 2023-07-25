/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/25 16:24:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_map
{
	char	**map_grid;
	int		height;
	int		width;
	int		start;
	int		exit;
	int		item;
	int		player_x_position;
	int		player_y_position;
	int		enemy;
	int		collectible;
}			t_map;

//		parser.c
void		parse_argument(int argc, char **argv);
void		parse_map(t_map *map);
//		parser_utils/
void		check_file_format(char *str);
void		check_format(t_map *map);
void		check_closing(t_map *map);
//			element.c
void		count_element(t_map *map);
void		check_element_count(t_map *map);
void		check_doability(t_map *map);
//		error/printed_exit_error.c
void		printed_exit_error(char *msg);
//		map_utils/
t_map		*read_map(int fd);
void		init_attribute(t_map *attribute);
t_map		*get_map_copy(t_map *map);
void		clear_map(t_map *map);

#endif
