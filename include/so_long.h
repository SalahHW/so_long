/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/26 21:49:00 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../minilibx/mlx.h"
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

	void	*mlx_ptr;
	void	*window;

	void	*ground_img;
	int		ground_height;
	int		ground_width;
	void	*wall_img;
	int		wall_height;
	int		wall_width;
	void	*item_img;
	int		item_height;
	int		item_width;
	void	*portal_img;
	int		portal_height;
	int		portal_width;
	void	*enemy_img;
	int		enemy_height;
	int		enemy_width;
	void	*player_img;
	int		player_height;
	int		player_width;
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
t_map		*get_map_copy(t_map *map);
void		init_attribute(t_map *attribute);
void		clear_map(t_map *map);
//		game_utils/
void		launch_mlx(t_map *map);
#endif
