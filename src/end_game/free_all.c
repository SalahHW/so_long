/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 00:52:39 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/15 21:18:08 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	free_portal_img(t_map *map)
{
	if (map->portal1_img)
		mlx_destroy_image(map->mlx_ptr, map->portal1_img);
	if (map->portal2_img)
		mlx_destroy_image(map->mlx_ptr, map->portal2_img);
	if (map->portal3_img)
		mlx_destroy_image(map->mlx_ptr, map->portal3_img);
	if (map->portal4_img)
		mlx_destroy_image(map->mlx_ptr, map->portal4_img);
	if (map->portal5_img)
		mlx_destroy_image(map->mlx_ptr, map->portal5_img);
	if (map->portal6_img)
		mlx_destroy_image(map->mlx_ptr, map->portal6_img);
	if (map->portal7_img)
		mlx_destroy_image(map->mlx_ptr, map->portal7_img);
	if (map->portal8_img)
		mlx_destroy_image(map->mlx_ptr, map->portal8_img);
}

void	free_img(t_map *map)
{
	if (map->ground_img)
		mlx_destroy_image(map->mlx_ptr, map->ground_img);
	if (map->wall_img)
		mlx_destroy_image(map->mlx_ptr, map->wall_img);
	if (map->item_img)
		mlx_destroy_image(map->mlx_ptr, map->item_img);
	if (map->enemy_img)
		mlx_destroy_image(map->mlx_ptr, map->enemy_img);
	if (map->player_img)
		mlx_destroy_image(map->mlx_ptr, map->player_img);
	free_portal_img(map);
}

void	free_mlx(t_map *map)
{
	if (map->mlx_ptr)
		free(map->mlx_ptr);
}

void	free_map(t_map *map)
{
	if (map)
	{
		if (map->map_grid)
			p_free_splited_str(map->map_grid);
		free(map);
	}
}
