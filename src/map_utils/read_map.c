/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:17:50 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 22:08:24 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_map_edge	*read_map(int fd)
{
	char			*line;
	t_map_edge		*map;
	t_map_attribute	*attribute;

	if (fd < 0)
		printed_exit_error("File not found");
	line = get_next_line(fd);
	if (!line)
		printed_exit_error("File is empty");
	map = malloc(sizeof(t_map_edge));
	attribute = malloc(sizeof(t_map_attribute));
	if (!map || !attribute)
		printed_exit_error("Memory allocation error");
	init_map(map);
	init_attribute(attribute);
	map->attribute = attribute;
	while (line)
	{
		push_back(map, line);
		map->attribute->height++;
		line = get_next_line(fd);
	}
	return (map);
}
