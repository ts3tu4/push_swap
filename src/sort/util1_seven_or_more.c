/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more_util.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:52:40 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 21:02:01 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split6_search(t_node *tmp, int mid_num, int halfblock_num)
{
	if ((tmp->index) >= (mid_num + halfblock_num * 5)
		|| (tmp->index) <= (mid_num - halfblock_num * 5))
		return (6);
	else if ((tmp->index) >= (mid_num + halfblock_num * 4)
		|| (tmp->index) <= (mid_num - halfblock_num * 4))
		return (5);
	else if ((tmp->index) >= (mid_num + halfblock_num * 3)
		|| (tmp->index) <= (mid_num - halfblock_num * 3))
		return (4);
	else if ((tmp->index) >= (mid_num + halfblock_num * 2)
		|| (tmp->index) <= (mid_num - halfblock_num * 2))
		return (3);
	else if ((tmp->index) >= (mid_num + halfblock_num * 1)
		|| (tmp->index) <= (mid_num - halfblock_num * 1))
		return (2);
	else
		return (1);
}

int	is_num_in_block(t_node **list_a, int i)
{
	t_node	*tmp;

	tmp = *list_a;
	while (tmp != NULL)
	{
		if (tmp->block == i)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	fill_lower_half(t_node **list_b, t_monitor *monitor_b, int i)
{
	int	block_num;

	block_num = 7 - i;
	(*list_b)->block = block_num;
	ft_print_rb_extra(list_b, monitor_b);
}

void	fill_upper_half(t_node **list_b, int i)
{
	int	block_num;

	block_num = 6 + i;
	(*list_b)->block = block_num;
}
