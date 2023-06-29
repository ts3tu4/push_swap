/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:51:46 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/30 01:01:03 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_rotate(t_node **list_a)
{
	t_node	*first_node;
	t_node	*last_node;

	if (!list_a || !(*list_a) || !(*list_a)->next)
		return ;
	first_node = *list_a;
	last_node = ft_lstlast(*list_a);
	if (!last_node)
		return ;
	*list_a = (*list_a)->next;
	(*list_a)->prev = NULL;
	first_node->prev = last_node;
	first_node->next = NULL;
	last_node->next = first_node;
}

void	ft_print_ra(t_node **list_a)
{
	ft_rotate(list_a);
	ft_printf("ra\n");
}
