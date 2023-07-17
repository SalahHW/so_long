/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:40:19 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 22:53:42 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	get_start_pos(t_map_edge *map)
{
	t_map	*map_ptr;
	char	*line_ptr;
	int		x_position;
	int		y_position;

	y_position = 0;
	map_ptr = map->first;
	while (map_ptr)
	{
		x_position = 0;
		line_ptr = map_ptr->line;
		while (*line_ptr && *line_ptr != '\n')
		{
			if (*line_ptr == 'P')
			{
				map->attribute->x_player_pos = x_position;
				map->attribute->y_player_pos = y_position;
				return;
			}
			line_ptr++;
			x_position++;
		}
		y_position++;
		map_ptr = map_ptr->next;
	}
}
