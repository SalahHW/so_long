/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:12:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 13:38:51 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	load_texture(t_map *map)
{
	load_enemy_texture(map);
	load_ground_texture(map);
	load_item_texture(map);
	load_player_texture(map);
	load_portal_texture(map);
	load_wall_texture(map);
}
