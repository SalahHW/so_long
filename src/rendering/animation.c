/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:02:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 23:29:40 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	trigger_animation(t_map *map)
{
	static int	delay_count;
	int			max_delay;
	char		*move_count;

	max_delay = 60;
	// mlx_clear_window(map->mlx_ptr, map->window);
	// render_window(map);
	if (delay_count >= max_delay)
	{
		map->frame++;
		if (map->frame > 8)
			map->frame = 1;
		delay_count = 0;
	}
	move_count = ft_itoa(map->move_counter);
	mlx_string_put(map->mlx_ptr, map->window, 10, 30, 0XFFFFFF, move_count);
	free(move_count);
	delay_count++;
	return (0);
}
