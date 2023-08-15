/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player_texture.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:13:56 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/15 20:13:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_player_texture(t_map *map)
{
	if (!map->player_img)
	{
		free_img(map);
		free_mlx(map);
		free_map(map);
		printed_exit_error("Player texture missing");
	}
}

void	load_player_texture(t_map *map)
{
	map->player_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/P.xpm",
			&map->player_width, &map->player_height);
	check_player_texture(map);
}
