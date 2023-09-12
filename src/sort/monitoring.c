/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:14:49 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 19:15:17 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_monitor	*ft_monitoringlist(t_node **list_a, t_monitor *monitor_a)
{
	monitor_a->top = *list_a;
	monitor_a->bottom = ft_lstlast(*list_a);
	monitor_a->count = ft_lstsize(*list_a);
	return (monitor_a);
}

t_monitor	*ft_makemonitor(t_node **list_a)
{
	t_monitor	*monitor;

	monitor = malloc(sizeof(t_monitor));
	if (!monitor)
		return (NULL);
	monitor->top = *list_a;
	monitor->bottom = ft_lstlast(*list_a);
	monitor->count = ft_lstsize(*list_a);
	return (monitor);
}
