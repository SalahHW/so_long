/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:47:44 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/16 01:35:29 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_format(t_map *map)
{
	size_t	width;
	int		y;

	y = 0;
	width = ft_strlen(map->map_grid[y]);
	while (map->map_grid[y])
	{
		if (ft_strlen(map->map_grid[y]) != width)
		{
			free_map(map);
			printed_exit_error("Map is not a square");
		}
		y++;
	}
	map->width = width;
	map->height = y;
}
