/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2_seven_or_more.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:57:32 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/17 20:46:19 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	find_b_max_in_top(t_node **list_b, int max_num)
{
	int		mid_num;
	t_node	*tmp;
	int		i;

	tmp = *list_b;
	i = 0;
	mid_num = get_mid_index(list_b, 0);
	while (tmp->index != max_num)
	{
		tmp = tmp->next;
		i++;
	}
	if (i > mid_num)
		return (1);
	return (0);
}

int	is_min_index_in_block(t_node **list_b, int block_num, int c_index)
{
	t_node	*tmp;
	int		min_index;

	tmp = *list_b;
	min_index = tmp->index;
	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (block_num == tmp->block && tmp->index < min_index)
			min_index = tmp->index;
		tmp = tmp->next;
	}
	if (c_index == min_index)
		return (0);
	return (1);
}

int	max_block_num_b(t_node **list_b)
{
	t_node	*tmp;
	int		max_block_num;

	tmp = *list_b;
	max_block_num = 0;
	while (tmp != NULL)
	{
		if (tmp->block > max_block_num)
			max_block_num = tmp->block;
		tmp = tmp->next;
	}
	return (max_block_num);
}
