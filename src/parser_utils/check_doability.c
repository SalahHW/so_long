/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doability.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:24:04 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/20 23:54:02 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_doability(t_map *map)
{
	t_map	*player_position;
	char	*top_position;
	char	*bottom_posiiton;
	char	*left_position;
	char	*right_position;

	player_position = get_start_pos(map);
//	top_position = get_top_position(map);
//	bottom_posiiton = get_top_position(map);
	ft_printf("%d\n", map->attribute->y_player_pos);
}
