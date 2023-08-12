/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:05:14 by sbouheni          #+#    #+#             */
/*   Updated: 2023/08/02 19:08:26 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	is_enemy(char c)
{
	if (c == 'K')
		return (1);
	return (0);
}

int	is_wall(char c)
{
	if (c == '1')
		return (1);
	return (0);
}

int	is_item(char c)
{
	if (c == 'C')
		return (1);
	return (0);
}

int	is_portal(char c)
{
	if (c == 'E')
		return (1);
	return (0);
}
