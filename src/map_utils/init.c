/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:06:58 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/12 21:21:19 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

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
	attribute->frame = 1;
}
