/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:37:45 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 01:33:51 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_element(t_map *map, int x, int y)
{
	if (map->map_grid[y][x] == '0' || map->map_grid[y][x] == '1')
		;
	else if (map->map_grid[y][x] == 'C')
		map->item++;
	else if (map->map_grid[y][x] == 'E')
	{
		map->exit++;
		map->portal_x_position = x;
		map->portal_y_position = y;
	}
	else if (map->map_grid[y][x] == 'P')
	{
		map->start++;
		map->player_x_position = x;
		map->player_y_position = y;
	}
	else if (map->map_grid[y][x] == 'K')
		map->enemy++;
	else
	{
		free_map(map);
		printed_exit_error("Map contain wrong element\n");
	}
}

void	count_element(t_map *map)
{
	int	x;
	int	y;

	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			check_element(map, x, y);
			x++;
		}
		y++;
	}
}

void	check_element_count(t_map *map)
{
	if (map->start < 1)
	{
		free_map(map);
		printed_exit_error("Map doesn't have any start");
	}
	if (map->start > 1)
	{
		free_map(map);
		printed_exit_error("Map have more than one start");
	}
	if (map->exit < 1)
	{
		free_map(map);
		printed_exit_error("Map doesn't have any exit");
	}
	if (map->exit > 1)
	{
		free_map(map);
		printed_exit_error("Map have more than one exit");
	}
	if (map->item < 1)
	{
		free_map(map);
		printed_exit_error("Map doesn't have any item");
	}
}
