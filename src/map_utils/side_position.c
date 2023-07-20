/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:10:22 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/19 19:24:56 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

char	*get_top_position(t_map_edge *map, char *location)
{
	char *top_position;
	t_map	*map_ptr;

	map_ptr = map->first;
	while(map_ptr)
	{
		while (y_pos < y_location_pos)
			map_ptr = map_ptr->next;
	}

	
}
