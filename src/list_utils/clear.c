/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:35:19 by sbouheni          #+#    #+#             */
/*   Updated: 2023/07/16 17:37:14 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	clear_list(t_map_edge *list)
{
	t_map	*tmp;

	while (list->first)
	{
		tmp = list->first;
		list->first = list->first->next;
		free(tmp->line);
		free(tmp);
	}
	free(list->attribute);
	list->attribute = NULL;
	list->last = NULL;
	list->last = NULL;
}
