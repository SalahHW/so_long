/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:47:44 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 18:30:20 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_format(t_map_edge *map)
{
	t_map	*map_ptr;
	char	*line_ptr;
	int		width;
	int		temp_width;

	width = 0;
	map_ptr = map->first;
	while (map_ptr)
	{
		line_ptr = map_ptr->line;
		temp_width = 0;
		while (*line_ptr && *line_ptr != '\n')
		{
			temp_width++;
			line_ptr++;
		}
		if (width != 0 && temp_width != width)
			printed_exit_error("Map is not a square");
		width = temp_width;
		map_ptr = map_ptr->next;
	}
}
