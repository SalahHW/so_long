/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:02:41 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/14 15:35:22 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	push_front(t_map_edge *list, char *line)
{
	t_map	*new_line;

	new_line = malloc(sizeof(t_map));
	if (!new_line)
		printed_exit_error("Memory allocation problem");
	new_line->line = line;
	new_line->next = list->first;
	new_line->prev = NULL;
	if (list->first)
		list->first->prev = new_line;
	else
		list->last = new_line;
	list->first = new_line;
}
