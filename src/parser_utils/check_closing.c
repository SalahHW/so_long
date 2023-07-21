/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_closing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:38:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/21 18:24:44 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_closing(t_map *map)
{
	int x;
	int y;

	y = 0;
	while (map->map_grid[y])
	{
		x = 0;
		while (map->map_grid[y][x])
		{
			if (y == 0 || y == map->height - 1 || x == 0
				|| x == map->width - 1)
			{
				if (map->map_grid[y][x] != '1')
					printed_exit_error("Map is not closed");
			}
			x++;
		}
		y++;
	}
}
