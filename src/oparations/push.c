/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:51:26 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/25 14:26:11 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_push(t_node **list_a, t_node **list_b)
{
	t_node	*tmp;

	tmp = *list_a;
	*list_a = (*list_a)->next;
	if (*list_a)
		(*list_a)->prev = NULL;
	tmp->next = *list_b;
	if (*list_b)
		(*list_b)->prev = tmp;
	tmp->next = *list_b;
	tmp->prev = NULL;
	*list_b = tmp;
}

void	ft_print_pb(t_node **list_a, t_node **list_b)
{
	ft_push(list_a, list_b);
	ft_printf("pb\n");
}

void	ft_print_pa(t_node **list_a, t_node **list_b)
{
	ft_push(list_b, list_a);
	ft_printf("pa\n");
}
