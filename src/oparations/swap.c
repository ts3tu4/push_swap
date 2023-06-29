/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:19:45 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/30 00:55:35 by mnanke           ###   ########.fr       */
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
