/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_closing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:38:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 21:45:18 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_closing(t_map_edge *map)
{
	t_map	*map_ptr;
	char	*line_ptr;
	int		line;
	int		column;

	line = 0;
	map_ptr = map->first;
	while (map_ptr)
	{
		column = 0;
		line_ptr = map_ptr->line;
		while (*line_ptr && *line_ptr != '\n')
		{
			if (line == 0 || line == map->attribute->height - 1 || column == 0
				|| column == map->attribute->width - 1)
			{
				if (*line_ptr != '1')
					printed_exit_error("Map is not closed");
			}
			column++;
			line_ptr++;
		}
		line++;
		map_ptr = map_ptr->next;
	}
}
