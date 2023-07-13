/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:38:02 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 00:25:04 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	map_fd;

	parse_argument(argc, argv);
	argv ++;
	map_fd = open(*argv, O_RDWR);
	parse_map(map_fd);
}
