/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:19:45 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 18:43:02 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_swap(t_node **list_a)
{
	t_node	*first_node;
	t_node	*second_node;

	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	first_node = *list_a;
	second_node = (*list_a)->next;
	first_node->next = second_node->next;
	first_node->prev = second_node;
	second_node->prev = NULL;
	second_node->next = first_node;
	if (first_node->next)
		first_node->next->prev = first_node;
	*list_a = second_node;
}

void	ft_print_sa(t_node **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}

void	ft_print_sb(t_node **list_b)
{
	ft_swap(list_b);
	ft_printf("sb\n");
}

void	ft_print_sa_extra(t_node **list_a, t_monitor *monitor_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
	ft_monitoringlist(list_a, monitor_a);
}

void	ft_print_sb_extra(t_node **list_b, t_monitor *monitor_b)
{
	ft_swap(list_b);
	ft_printf("sb\n");
	ft_monitoringlist(list_b, monitor_b);
}
