/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_ground_texture.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:10:19 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:18:59 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_ground_texture(t_map *map)
{
	if (!map->ground_img)
		printed_exit_error("Ground texture missing");
}

void	load_ground_texture(t_map *map)
{
	map->ground_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/0.xpm",
			&map->ground_width, &map->ground_height);
	check_ground_texture(map);
}
