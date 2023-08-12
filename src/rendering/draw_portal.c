/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_portal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:40:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/30 21:25:34 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_portal(t_map *map, int x, int y)
{
	ft_printf("Item left : %d\n", map->item);
	if (map->item == 0)
	{
		ft_printf("draw portal\n", map->item);
		mlx_put_image_to_window(map->mlx_ptr, map->window, map->portal_img, x
				* map->portal_width, y * map->portal_height);
	}
	else
	{
		ft_printf("draw ground\n", map->item);
		draw_ground(map, x, y);
	}
}
