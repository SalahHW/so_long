/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:38:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 02:15:59 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	int	map_fd;
	t_map_edge map;

	map.first = NULL;
	map.last = NULL;
	parse_argument(argc, argv);
	argv ++;
	map_fd = open(*argv, O_RDWR);
	parse_map(map_fd);
}
