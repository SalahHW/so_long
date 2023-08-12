/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:36:22 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/30 18:38:43 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_enemy(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx_ptr, map->window, map->enemy_img, x
			* map->enemy_width, y * map->enemy_height);
}
