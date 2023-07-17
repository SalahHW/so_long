/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_element.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:37:45 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/17 22:46:36 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_element(t_map_edge *map)
{
	t_map	*map_ptr;
	char	*line_ptr;

	map_ptr = map->first;
	while (map_ptr)
	{
		line_ptr = map_ptr->line;
		while (*line_ptr && *line_ptr != '\n')
		{
			if (*line_ptr == '0' || *line_ptr == '1')
				;
			else if (*line_ptr == 'C')
				map->attribute->item++;
			else if (*line_ptr == 'E')
				map->attribute->exit++;
			else if (*line_ptr == 'P')
				map->attribute->player++;
			else
				printed_exit_error("Map contains wrong elements");
			line_ptr++;
		}
		map_ptr = map_ptr->next;
	}
}
