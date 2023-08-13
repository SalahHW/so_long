/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:02:53 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/13 22:32:35 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	animation_timer(void)
{
	long	i;

	i = 0;
	while (i < 200000000)
		i++;
}
int	trigger_animation(t_map *map)
{
	render_window(map);
	map->frame++;
	if (map->frame > 8)
		map->frame = 0;
	return (0);
}
