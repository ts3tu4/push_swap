/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:50:31 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 19:14:58 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	print_list_a(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = [%d]\t:\tprevp:%p\tlistp:%p\tnextp:%p\tblock:%d\n",
			(*list_a)->index, (*list_a)->prev,
			(*list_a), (*list_a)->next, (*list_a)->block);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}

void	print_monitoringlist(t_monitor *monitor_a)
{
	printf("[monitor]\ntop:%p\tbottom:%p\tcount:%d\n",
		monitor_a->top, monitor_a->bottom, monitor_a->count);
}
