/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:02:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 02:30:42 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	trigger_animation(t_map *map)
{
	static int	delay_count;
	int			max_delay;

	max_delay = 60;
	mlx_clear_window(map->mlx_ptr, map->window);
	render_window(map);
	if (delay_count >= max_delay)
	{
		map->frame++;
		if (map->frame > 8)
			map->frame = 1;
		delay_count = 0;
	}
	delay_count++;
	return (0);
}
