/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:56:18 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/13 03:21:45 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static	void check_file_format(char *str)
{
	char *str_ptr;

	str_ptr = str;
	while (*str_ptr)
		str_ptr ++;
	str_ptr -= 3;
	if (*str_ptr != 'b')
		printed_exit_error("Wrong file format\nFile format should be .ber");
	str_ptr++;
	if (*str_ptr != 'e')
		printed_exit_error("Wrong file format\nFile format should be .ber");
	str_ptr++;
	if (*str_ptr != 'r')
		printed_exit_error("Wrong file format\nFile format should be .ber");
}

void	parse_argument(int argc, char **argv)
{
	if (argc != 2)
		printed_exit_error("Wrong number of argument");
	argv++;
	check_file_format(*argv);
}
