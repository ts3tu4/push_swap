/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:52:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 18:36:57 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_reverse_rotate(t_node **list_a)
{
	t_node	*first_node;
	t_node	*last_node;

	first_node = *list_a;
	last_node = ft_lstlast(*list_a);
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	last_node->next = first_node;
	first_node->prev = last_node;
	*list_a = last_node;
}

void	ft_print_rra(t_node **list_a)
{
	ft_reverse_rotate(list_a);
	ft_printf("rra\n");
}

void	ft_print_rrb(t_node **list_b)
{
	ft_reverse_rotate(list_b);
	ft_printf("rrb\n");
}

void	ft_print_rra_extra(t_node **list_a, t_monitor *monitor_a)
{
	ft_reverse_rotate(list_a);
	ft_printf("rra\n");
	ft_monitoringlist(list_a, monitor_a);
}

void	ft_print_rrb_extra(t_node **list_b, t_monitor *monitor_b)
{
	ft_reverse_rotate(list_b);
	ft_printf("rrb\n");
	ft_monitoringlist(list_b, monitor_b);
}
