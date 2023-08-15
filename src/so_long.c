/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:38:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/14 21:52:49 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	print_map(t_map *map);

int	main(int argc, char **argv)
{
	int		map_fd;
	t_map	*map;

	parse_argument(argc, argv);
	argv++;
	map_fd = open(*argv, O_RDWR);
	map = read_map(map_fd);
	close(map_fd);
	parse_map(map);
	launch_mlx(map);
}
