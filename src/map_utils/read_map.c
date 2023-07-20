/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:17:50 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/21 00:44:56 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

t_map	*read_map(int fd)
{
	char	*line;
	char	*buffer;
	t_map	*map;

	if (fd < 0)
		printed_exit_error("File not found");
	line = get_next_line(fd);
	if (!line)
		printed_exit_error("File is empty");
	buffer = ft_calloc(1, 1);
	while (line)
	{
		buffer = p_free_strjoin(line, buffer);
		line = get_next_line(fd);
	}
	map = malloc(sizeof(t_map));
	map->map_grid = ft_split(buffer, '\n');
	init_attribute(map);
	free(buffer);
	free(line);
	return (map);
}
