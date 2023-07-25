/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 22:13:35 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/25 17:38:30 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	copy_map_grid(t_map *src, t_map *dest)
{
	int	y;

	y = 0;
	dest->map_grid = malloc(sizeof(char *) * (src->height + 1));
	while (src->map_grid[y])
	{
		dest->map_grid[y] = ft_strdup(src->map_grid[y]);
		y++;
	}
	dest->map_grid[y] = 0;
}

static void	copy_map_set(t_map *src, t_map *dest)
{
	dest->height = src->height;
	dest->width = src->width;
	dest->start = src->start;
	dest->exit = src->exit;
	dest->item = src->item;
	dest->player_x_position = src->player_x_position;
	dest->player_y_position = src->player_y_position;
	dest->enemy = src->enemy;
}

t_map	*get_map_copy(t_map *original_map)
{
	t_map	*map_copy;

	map_copy = malloc(sizeof(t_map));
	if (!map_copy)
		printed_exit_error("Memory allocation problem");
	copy_map_grid(original_map, map_copy);
	copy_map_set(original_map, map_copy);
	map_copy->collectible = map_copy->item + 1;
	return (map_copy);
}
