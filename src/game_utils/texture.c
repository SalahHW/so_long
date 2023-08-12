/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:12:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/27 20:17:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_img(t_map *map)
{
	if (!map->ground_img)
		printed_exit_error("Ground texture missing");
	if (!map->wall_img)
		printed_exit_error("Wall texture missing");
	if (!map->item_img)
		printed_exit_error("Item texture missing");
	if (!map->enemy_img)
		printed_exit_error("Enemy texture missing");
	if (!map->player_img)
		printed_exit_error("Player texture missing");
	if (!map->portal_img)
		printed_exit_error("Portal texture missing");
}

void	load_texture(t_map *map)
{
	map->ground_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/0.xpm",
			&map->ground_width, &map->ground_height);
	map->wall_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/1.xpm",
			&map->wall_width, &map->wall_height);
	map->item_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/C.xpm",
			&map->item_width, &map->item_height);
	map->enemy_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/K.xpm",
			&map->enemy_width, &map->enemy_height);
	map->player_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/P.xpm",
			&map->player_width, &map->player_height);
	map->portal_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E1.xpm",
			&map->portal_width, &map->portal_height);
	check_img(map);
}
