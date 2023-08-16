/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_portal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:54:58 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 23:56:21 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	render_portal(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			if (map->map_grid[y][x] == 'E')
				draw_portal(map, x, y);
			x++;
		}
		y++;
	}
}

void	draw_portal(t_map *map, int x, int y)
{
	void	*portal_img;

	portal_img = NULL;
	if (map->frame == 1)
		portal_img = map->portal1_img;
	else if (map->frame == 2)
		portal_img = map->portal2_img;
	else if (map->frame == 3)
		portal_img = map->portal3_img;
	else if (map->frame == 4)
		portal_img = map->portal4_img;
	else if (map->frame == 5)
		portal_img = map->portal5_img;
	else if (map->frame == 6)
		portal_img = map->portal6_img;
	else if (map->frame == 7)
		portal_img = map->portal7_img;
	else
		portal_img = map->portal8_img;
	if (map->item == 0)
		mlx_put_image_to_window(map->mlx_ptr, map->window, portal_img, x
			* map->portal_width, y * map->portal_height);
	else
		draw_ground(map, x, y);
}
