/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_item_texture.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:12:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:18:48 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	check_item_texture(t_map *map)
{
	if (!map->item_img)
		printed_exit_error("Item texture missing");
}

void	load_item_texture(t_map *map)
{
	map->item_img = mlx_xpm_file_to_image(map->mlx_ptr, "./texture/C.xpm",
			&map->item_width, &map->item_height);
	check_item_texture(map);
}
