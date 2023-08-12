/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_portal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:40:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:39:16 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_portal(t_map *map, int x, int y)
{
	if (map->item == 0)
	{
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal1_img, x
			* map->portal_width, y * map->portal_height);
	}
	else
		draw_ground(map, x, y);
}
