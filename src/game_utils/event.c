/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:44:25 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/14 21:29:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	deal_key(int key, t_map *map)
{
	if (key == 65307)
		quit_game(map);
	if (key == 119 || key == 65362)
		move_up(map);
	else if (key == 115 || key == 65364)
		move_down(map);
	else if (key == 97 || key == 65361)
		move_left(map);
	else if (key == 100 || key == 65363)
		move_right(map);
	return (0);
}
