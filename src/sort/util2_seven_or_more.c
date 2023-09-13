/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2_seven_or_more.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:57:32 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/13 02:20:25 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	find_b_max_in_top(t_node **list_b)
{
	int		max_num;
	int		mid_num;
	t_node	*tmp;
	int		i;

	tmp = *list_b;

	i = 0;
	while (tmp->index != max_num)
	{
		tmp = tmp->next;
		i++;
	}
	if (i > mid_num)
		return (1);
	return (0);
}

void	send_back_to_a(t_node **list_a, t_node **list_b,
	t_monitor *monitor_a, t_monitor *monitor_b)
{
	int	max_num;
	int	top_or_bottom;

	max_num = get_max_index(list_b);
	top_or_bottom = find_b_max_in_top(list_b);
	while ((*list_b)->index != max_num)
	{
		if (top_or_bottom == 0)
			ft_print_rb_extra(list_b, monitor_b);
		else
			ft_print_rrb_extra(list_b, monitor_b);
	}
	ft_print_pa_extra(list_a, list_b, monitor_a, monitor_b);
}
