/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_portal_texture.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:36:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/15 20:13:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_portal_texture(t_map *map)
{
	if (!map->portal1_img || !map->portal2_img || !map->portal3_img
		|| !map->portal4_img || !map->portal5_img || !map->portal6_img
		|| !map->portal7_img || !map->portal8_img)
	{
		free_img(map);
		free_mlx(map);
		free_map(map);
		printed_exit_error("Portal texture is misiing");
	}
}

void	load_portal_texture(t_map *map)
{
	map->portal1_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E1.xpm",
			&map->portal_width, &map->portal_height);
	map->portal2_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E2.xpm",
			&map->portal_width, &map->portal_height);
	map->portal3_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E3.xpm",
			&map->portal_width, &map->portal_height);
	map->portal4_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E4.xpm",
			&map->portal_width, &map->portal_height);
	map->portal5_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E5.xpm",
			&map->portal_width, &map->portal_height);
	map->portal6_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E6.xpm",
			&map->portal_width, &map->portal_height);
	map->portal7_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E7.xpm",
			&map->portal_width, &map->portal_height);
	map->portal8_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/E8.xpm",
			&map->portal_width, &map->portal_height);
	check_portal_texture(map);
}
