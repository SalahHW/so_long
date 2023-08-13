/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:58:57 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/13 18:00:45 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	move_up(t_map *map)
{
	int	x;
	int	y;

	x = map->player_x_position;
	y = map->player_y_position;
	if (is_valid_position(map, x, y - 1))
	{
		map->map_grid[y - 1][x] = 'P';
		if (y == map->portal_y_position && x == map->portal_x_position)
			map->map_grid[y][x] = 'E';
		else
			map->map_grid[y][x] = '0';
		map->player_y_position--;
		map->move_counter++;
		ft_printf("Number of move : %d\n", map->move_counter);
	}
}

void	move_down(t_map *map)
{
	int	x;
	int	y;

	x = map->player_x_position;
	y = map->player_y_position;
	if (is_valid_position(map, x, y + 1))
	{
		map->map_grid[y + 1][x] = 'P';
		if (y == map->portal_y_position && x == map->portal_x_position)
			map->map_grid[y][x] = 'E';
		else
			map->map_grid[y][x] = '0';
		map->player_y_position++;
		map->move_counter++;
		ft_printf("Number of move : %d\n", map->move_counter);
	}
}

void	move_left(t_map *map)
{
	int	x;
	int	y;

	x = map->player_x_position;
	y = map->player_y_position;
	if (is_valid_position(map, x - 1, y))
	{
		map->map_grid[y][x - 1] = 'P';
		if (y == map->portal_y_position && x == map->portal_x_position)
			map->map_grid[y][x] = 'E';
		else
			map->map_grid[y][x] = '0';
		map->player_x_position--;
		map->move_counter++;
		ft_printf("Number of move : %d\n", map->move_counter);
	}
}

void	move_right(t_map *map)
{
	int	x;
	int	y;

	x = map->player_x_position;
	y = map->player_y_position;
	if (is_valid_position(map, x + 1, y))
	{
		map->map_grid[y][x + 1] = 'P';
		if (y == map->portal_y_position && x == map->portal_x_position)
			map->map_grid[y][x] = 'E';
		else
			map->map_grid[y][x] = '0';
		map->player_x_position++;
		map->move_counter++;
		ft_printf("Number of move : %d\n", map->move_counter);
	}
}
