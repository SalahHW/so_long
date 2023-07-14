/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:34:06 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 21:34:53 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_file_format(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str_ptr)
		str_ptr++;
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
