/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_ground.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:04:03 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:37:41 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_ground(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx_ptr, map->window, map->ground_img, x
		* map->ground_width, y * map->ground_height);
}
