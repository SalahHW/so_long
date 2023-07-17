/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:06:58 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/17 23:19:29 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	init_map(t_map_edge *list)
{
	list->first = NULL;
	list->last = NULL;
	list->attribute = NULL;
}

void	init_attribute(t_map_attribute *attribute)
{
	attribute->height = 0;
	attribute->width = 0;
	attribute->start = 0;
	attribute->exit = 0;
	attribute->item = 0;
	attribute->player = 0;
	attribute->enemy = 0;
	attribute->x_player_pos = 0;
	attribute->y_player_pos = 0;
}
