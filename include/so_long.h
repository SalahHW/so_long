/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 23:16:32 by sbouheni         ###   ########.fr       */
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
	int		enemy;
	int		player_x_position;
	int		player_y_position;
	int		portal_x_position;
	int		portal_y_position;
	int		move_counter;
	int		frame;

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
	void	*enemy_img;
	int		enemy_height;
	int		enemy_width;
	void	*player_img;
	int		player_height;
	int		player_width;
	void	*portal1_img;
	void	*portal2_img;
	void	*portal3_img;
	void	*portal4_img;
	void	*portal5_img;
	void	*portal6_img;
	void	*portal7_img;
	void	*portal8_img;
	int		portal_height;
	int		portal_width;
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
//		end_game/
void		printed_exit_error(char *msg);
void		quit_game(t_map *map);
void		game_won(t_map *map);
void		game_lost(t_map *map);
void		free_map(t_map *map);
void		free_mlx(t_map *map);
void		free_img(t_map *map);
//		map_utils/
t_map		*read_map(int fd);
t_map		*get_map_copy(t_map *map);
void		init_attribute(t_map *attribute);
//		game_utils/
void		launch_mlx(t_map *map);
void		load_texture(t_map *map);
int			deal_key(int key, t_map *map);
void		move_up(t_map *map);
void		move_down(t_map *map);
void		move_left(t_map *map);
void		move_right(t_map *map);
int			is_enemy(char c);
int			is_wall(char c);
int			is_item(char c);
int			is_portal(char c);
int			is_valid_position(t_map *map, int x, int y);
//		rendering/
void		load_enemy_texture(t_map *map);
void		load_ground_texture(t_map *map);
void		load_item_texture(t_map *map);
void		load_player_texture(t_map *map);
void		load_portal_texture(t_map *map);
void		load_wall_texture(t_map *map);
void		render_window(t_map *map);

void		render_wall(t_map *map);
void		render_ground(t_map *map);
void		draw_ground(t_map *map, int x, int y);
void		draw_wall(t_map *map, int x, int y);
void		draw_item(t_map *map, int x, int y);
void		draw_enemy(t_map *map, int x, int y);
void		draw_player(t_map *map, int x, int y);
void		draw_portal(t_map *map, int x, int y);
int			trigger_animation(t_map *map);
#endif
