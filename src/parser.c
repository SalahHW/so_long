/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:56:18 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 22:49:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	parse_argument(int argc, char **argv)
{
	if (argc != 2)
		printed_exit_error("Wrong number of argument");
	argv++;
	check_file_format(*argv);
}

void	parse_map(t_map_edge *map)
{
	check_element(map);
	check_format(map);
	check_closing(map);
	check_doability(map);
}
