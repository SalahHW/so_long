/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_wall_texture.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:16:07 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:25:05 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_wall_texture(t_map *map)
{
	if (!map->wall_img)
		printed_exit_error("Wall texture missing");
}

void	load_wall_texture(t_map *map)
{
	map->wall_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/1.xpm",
			&map->wall_width, &map->wall_height);
	check_wall_texture(map);
}
