/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_enemy_texture.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:07:24 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:09:57 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_enemy_texture(t_map *map)
{
	if (!map->enemy_img)
		printed_exit_error("Enemy texture is missing");
}

void	load_enemy_texture(t_map *map)
{
	map->enemy_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/K.xpm",
			&map->enemy_width, &map->enemy_height);
	check_enemy_texture(map);
}
