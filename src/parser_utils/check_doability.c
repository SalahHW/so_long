/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doability.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:24:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 21:39:23 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static int	is_collectible(char c)
{
	if (c == 'C' || c == 'E')
		return (1);
	return (0);
}

static int	is_no_collectible(char c)
{
	if (c == '1' || c == 'K')
		return (1);
	return (0);
}

static int	is_doable(t_map *map, int x, int y)
{
	if (is_no_collectible(map->map_grid[y][x]))
		return (0);
	if (is_collectible(map->map_grid[y][x]))
		map->item--;
	map->map_grid[y][x] = '1';
	is_doable(map, x, y + 1);
	is_doable(map, x, y - 1);
	is_doable(map, x - 1, y);
	is_doable(map, x + 1, y);
	if (!map->item)
		return (1);
	return (0);
}

void	check_doability(t_map *map)
{
	t_map	*map_copy;

	map_copy = get_map_copy(map);
	if (!is_doable(map_copy, map_copy->player_x_position,
			map_copy->player_y_position))
		return (clear_map(map_copy), clear_map(map),
			printed_exit_error("Map is not doable"));
	clear_map(map_copy);
}
