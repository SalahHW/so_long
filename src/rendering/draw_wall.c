/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:14:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:39:46 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_wall(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx_ptr, map->window, map->wall_img, x
		* map->wall_width, y * map->wall_height);
}
