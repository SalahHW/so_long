/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:26:52 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/15 21:12:11 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	quit_game(t_map *map)
{
	free_img(map);
	mlx_destroy_window(map->mlx_ptr, map->window);
	mlx_destroy_display(map->mlx_ptr);
	free_mlx(map);
	free_map(map);
	exit(0);
}

void	game_won(t_map *map)
{
	ft_printf("You won the game\n");
	quit_game(map);
}

void	game_lost(t_map *map)
{
	ft_printf("You lost the game\n");
	quit_game(map);
}
