/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:11:11 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/25 16:16:06 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	clear_map(t_map *map)
{
	if (map)
	{
		if (map->map_grid)
			p_free_splited_str(map->map_grid);
		free(map);
	}
}
