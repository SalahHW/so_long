/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:21:33 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:38:00 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	render_window(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			if (map->map_grid[y][x] == '0')
				draw_ground(map, x, y);
			if (map->map_grid[y][x] == '1')
				draw_wall(map, x, y);
			if (map->map_grid[y][x] == 'C')
				draw_item(map, x, y);
			if (map->map_grid[y][x] == 'K')
				draw_enemy(map, x, y);
			if (map->map_grid[y][x] == 'E')
				draw_portal(map, x, y);
			if (map->map_grid[y][x] == 'P')
				draw_player(map, x, y);
			x++;
		}
		y++;
	}
}
