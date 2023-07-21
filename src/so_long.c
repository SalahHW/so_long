/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:38:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/21 16:58:12 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
	p_free_splited_str(map->map_grid);
	free(map);
}
