/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_portal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:40:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 21:22:42 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_portal(t_map *map, int x, int y)
{
	if (map->item == 0)
	{
		if (map->frame == 1)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 2)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal2_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 3)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal3_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 4)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal4_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 5)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal5_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 6)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal6_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 7)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal7_img,
					x * map->portal_width, y * map->portal_height);
		if (map->frame == 8)
			mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal8_img,
					x * map->portal_width, y * map->portal_height);
	}
	else
		draw_ground(map, x, y);
}
