/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:46:54 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/14 21:37:04 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	is_valid_position(t_map *map, int x, int y)
{
	if (is_wall(map->map_grid[y][x]))
		return (0);
	if (is_enemy(map->map_grid[y][x]))
		game_lost(map);
	if (is_item(map->map_grid[y][x]))
		map->item--;
	if (is_portal(map->map_grid[y][x]))
	{
		if (!map->item)
			game_won(map);
	}
	return (1);
}
