/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_item.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:37:28 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/30 18:38:38 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_item(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx_ptr, map->window, map->item_img, x
			* map->item_width, y * map->item_height);
}
