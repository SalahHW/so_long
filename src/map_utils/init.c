/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:06:58 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/15 21:38:13 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	init_pointer(t_map *attribute)
{
	attribute->mlx_ptr = NULL;
	attribute->window = NULL;
	attribute->ground_img = NULL;
	attribute->wall_img = NULL;
	attribute->item_img = NULL;
	attribute->enemy_img = NULL;
	attribute->player_img = NULL;
	attribute->portal1_img = NULL;
	attribute->portal2_img = NULL;
	attribute->portal3_img = NULL;
	attribute->portal4_img = NULL;
	attribute->portal5_img = NULL;
	attribute->portal6_img = NULL;
	attribute->portal7_img = NULL;
	attribute->portal8_img = NULL;
}

void	init_attribute(t_map *attribute)
{
	attribute->height = 0;
	attribute->width = 0;
	attribute->start = 0;
	attribute->exit = 0;
	attribute->item = 0;
	attribute->player_x_position = 0;
	attribute->player_y_position = 0;
	attribute->portal_x_position = 0;
	attribute->portal_y_position = 0;
	attribute->enemy = 0;
	attribute->move_counter = 0;
	attribute->frame = 1;
	init_pointer(attribute);
}
