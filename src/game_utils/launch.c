/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:21:22 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 23:16:45 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	launch_mlx(t_map *map)
{
	map->mlx_ptr = mlx_init();
	load_texture(map);
	map->window = mlx_new_window(map->mlx_ptr, map->width * 64, map->height
			* 64, "so_long");
	render_wall(map);
	render_ground(map);
	mlx_key_hook(map->window, deal_key, map);
	mlx_loop_hook(map->mlx_ptr, trigger_animation, map);
	mlx_loop(map->mlx_ptr);
}
