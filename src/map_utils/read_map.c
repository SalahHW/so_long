/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:17:50 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 19:45:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_map_edge	*read_map(int fd)
{
	char *line;
	t_map_edge	*map;

	if	(fd < 0)
		printed_exit_error("File not found");
	line = get_next_line(fd);
	if (!line)
		printed_exit_error("File is empty");
	init(map);
	while (line)
	{
		push_front(map, line);
		line = get_next_line(fd);
	}
	return map;
}