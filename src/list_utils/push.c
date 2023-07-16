/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:02:41 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 21:59:53 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	push_back(t_map_edge *list, char *line)
{
	t_map	*new_element;

	new_element = malloc(sizeof(t_map));
	if (!new_element)
		printed_exit_error("Memory allocation problem");
	new_element->line = line;
	new_element->prev = list->last;
	new_element->next = NULL;
	if (list->last)
		list->last->next = new_element;
	else
		list->first = new_element;
	list->last = new_element;
}
