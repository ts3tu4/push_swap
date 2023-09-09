/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:14:49 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 18:21:08 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_monitoringlist(t_node **list_a, t_monitor *monitor_a)
{
	monitor_a->top = *list_a;
	monitor_a->bottom = ft_lstlast(list_a);
	monitor_a->count = ft_lstsize(list_a);
}
