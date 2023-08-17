/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:02:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/17 00:35:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	trigger_animation(t_map *map)
{
	static int	delay_count;
	int			max_delay;
	char		*move_count;

	max_delay = 600;
	if (!map->item)
		draw_portal(map, map->portal_x_position, map->portal_y_position);
	if (delay_count >= max_delay)
	{
		map->frame++;
		if (map->frame > 8)
			map->frame = 1;
		delay_count = 0;
	}
	move_count = ft_itoa(map->move_counter);
	draw_wall(map, 0, 0);
	mlx_string_put(map->mlx_ptr, map->window, 10, 30, 0XFFFFFF, move_count);
	free(move_count);
	delay_count++;
	return (0);
}
