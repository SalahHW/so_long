/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:03:34 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 00:27:26 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdlib.h>
#include <fcntl.h>

//		parser.c		//
void	parse_argument(int argc, char **argv);
void	parse_map(int fd);
//		exit_error.c
void	printed_exit_error(char *msg);
