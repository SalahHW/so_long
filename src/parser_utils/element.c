/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_element.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:37:45 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/21 18:31:34 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	count_element(t_map *map)
{
	int	x;
	int y;

	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			if (map->map_grid[y][x] == '0' || map->map_grid[y][x] == '1')
				;
			else if (map->map_grid[y][x] == 'C')
				map->item++;
			else if (map->map_grid[y][x] == 'E')
				map->exit++;
			else if (map->map_grid[y][x] == 'P')
				map->player++;
			else if (map->map_grid[y][x] == 'K')
				map->enemy++;
			else
				printed_exit_error("Map contains wrong elements");
			x++;
		}
		y++;
	}
}
