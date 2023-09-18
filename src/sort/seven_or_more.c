/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:29:37 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/17 20:37:25 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	check_list_a_sort(t_node **list_a, t_monitor *monitor_a, int max_num)
{
	if (monitor_a ->count == 1)
		return ;
	else if (((*list_a)->next->index) - ((*list_a)->index) == -1)
		ft_print_sa_extra(list_a, monitor_a);
	else if ((*list_a)->index == max_num || (*list_a)->index == max_num - 1)
		return ;
	else
		ft_print_ra_extra(list_a, monitor_a);
}

void	sort_to_a(t_node **list_a, t_node **list_b,
	t_monitor *monitor_a, t_monitor *monitor_b)
{
	int	max_num;
	int	block_num;

	while (monitor_b->count != 0)
	{
		max_num = get_max_index(list_b);
		block_num = max_block_num_b(list_b);
		if (!find_b_max_in_top(list_b, max_num))
			while ((*list_b)->index != max_num
				&& (*list_b)->index != max_num - 1
				&& is_min_index_in_block(list_b, block_num, (*list_b)->index))
				ft_print_rb_extra(list_b, monitor_b);
		else
		{
			while ((*list_b)->index != max_num
				&& (*list_b)->index != max_num - 1
				&& is_min_index_in_block(list_b, block_num, (*list_b)->index))
				ft_print_rrb_extra(list_b, monitor_b);
		}
		ft_print_pa_extra(list_a, list_b, monitor_a, monitor_b);
		check_list_a_sort(list_a, monitor_a, max_num);
		while (monitor_a->bottom->index == (*list_a)->index - 1
			&& max_block_num_b(list_b) == block_num - 1)
			ft_print_rra_extra(list_a, monitor_a);
	}
}

void	send_mid_to_b(t_node **list_a, t_node **list_b,
	t_monitor *monitor_a, t_monitor *monitor_b)
{
	int	i;
	int	mid_num;

	mid_num = get_mid_index(list_a, 0);
	i = 1;
	while ((monitor_a->count) > 0)
	{
		while (is_num_in_block(list_a, i))
		{
			if ((*list_a)->block == i)
			{
				ft_print_pb_extra(list_a, list_b, monitor_a, monitor_b);
				if ((*list_b)->index <= mid_num)
					fill_lower_half(list_b, monitor_b, i);
				else
					fill_upper_half(list_b, i);
			}
			else
				ft_print_ra_extra(list_a, monitor_a);
		}
		i++;
	}
}

void	split6(t_node **list_a, int argc)
{
	int		halfblock_num;
	int		mid_num;
	t_node	*tmp;
	int		div_num;

	div_num = 12;
	if (argc < 12)
		div_num = argc;
	halfblock_num = argc / div_num;
	mid_num = get_mid_index(list_a, 0);
	tmp = *list_a;
	while (tmp != NULL)
	{
		tmp->block = split6_search(tmp, mid_num, halfblock_num);
		tmp = tmp->next;
	}
}

t_node	**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc)
{
	t_monitor	*monitor_a;
	t_monitor	*monitor_b;

	monitor_a = ft_makemonitor(list_a);
	monitor_b = ft_makemonitor(list_b);
	split6(list_a, argc);
	send_mid_to_b(list_a, list_b, monitor_a, monitor_b);
	sort_to_a(list_a, list_b, monitor_a, monitor_b);
	free(monitor_a);
	free(monitor_b);
	return (list_a);
}
