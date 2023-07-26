/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:21:22 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/26 22:33:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	load_texture(t_map *map)
{
	map->ground_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/0.xpm", &map->ground_width, &map->ground_height);
	map->wall_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/1.xpm", &map->wall_width, &map->wall_height);
	map->item_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/C.xpm", &map->item_width, &map->item_height);
	map->enemy_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/K.xpm", &map->enemy_width, &map->enemy_height);
	map->player_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/P.xpm", &map->player_width, &map->player_height);
	map->portal_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E1.xpm", &map->portal_width, &map->portal_height);
}

static void	render_window(t_map *map, int x, int y)
{
	char	current_block;

	current_block = map->map_grid[y][x];
	if (current_block == '0')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->ground_img, x * 64, y * 64);
	if (current_block == '1')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->wall_img, x * 64, y * 64);
	if (current_block == 'C')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->item_img, x * 64, y * 64);
	if (current_block == 'K')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->enemy_img, x * 64, y * 64);
	if (current_block == 'P')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->player_img, x * 64, y * 64);
	if (current_block == 'E')
		mlx_put_image_to_window(map->mlx_ptr,map->window, map->portal_img, x * 64, y * 64);
}

static void check_img(t_map *map)
{
	if (!map->ground_img)
		printed_exit_error("Ground texture missing");
	if (!map->wall_img)
		printed_exit_error("Wall texture missing");
	if (!map->item_img)
		printed_exit_error("Item texture missing");
	if (!map->enemy_img)
		printed_exit_error("Enemy texture missing");
	if (!map->player_img)
		printed_exit_error("Player texture missing");
	if (!map->portal_img)
		printed_exit_error("Portal texture missing");
}

void	launch_mlx(t_map *map)
{
	int	x;
	int	y;

	map->mlx_ptr = mlx_init();
	load_texture(map);
	map->window = mlx_new_window(map->mlx_ptr, map->width * 64, map->height
			* 64, "so_long");
	check_img(map);
	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			render_window(map, x, y);
			x++;
		}
		y++;
	}
	mlx_loop(map->mlx_ptr);
}
