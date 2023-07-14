/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:56:18 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 21:36:44 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	parse_argument(int argc, char **argv)
{
	if (argc != 2)
		printed_exit_error("Wrong number of argument");
	argv++;
	check_file_format(*argv);
}

void	parse_map(t_map_edge *map)
{
	t_map				*map_ptr;
	char				*line_ptr;
	t_map_elem_count	map_element;

	map_ptr = map->first;
	line_ptr = map_ptr->line;
	while (map_ptr)
	{
		while (*line_ptr && *line_ptr != '\n')
		{
			if (*line_ptr == '0')
				;
			else if (*line_ptr == '1')
				;
			else if (*line_ptr == 'C')
				map_element.item++;
			else if (*line_ptr == 'E')
				map_element.exit++;
			else if (*line_ptr == 'P')
				map_element.player++;
			else
				printed_exit_error("Map contains wrong elements");
			line_ptr++;
		}
		map_ptr = map_ptr->next;
	}
}
