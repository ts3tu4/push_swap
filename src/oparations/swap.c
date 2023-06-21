/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:19:45 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/21 20:59:11 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ft_printf.h"

void	ft_swap(t_node **list_a)
{
	t_node	*tmp;

	if ((*list_a) && (*list_a)->next)
	{
		tmp = *list_a;
		*list_a = (*list_a)->next;
		tmp->next = (*list_a)->next;
		tmp->prev = (*list_a);
		if ((*list_a)->next)
			((tmp->next)->prev) = tmp;
		(*list_a)->next = tmp;
		(*list_a)->prev = NULL;
	}
}

void	ft_print_sa(t_node **list_a)
{
	ft_swap(list_a);
	ft_printf("sa\n");
}
