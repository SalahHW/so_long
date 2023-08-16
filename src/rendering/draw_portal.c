/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_portal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:40:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 02:10:29 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

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
