/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:29:37 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 21:52:00 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	send_mid_to_b(t_node **list_a, t_node **list_b,
	t_monitor *monitor_a, t_monitor *monitor_b)
{
	int	i;
	int	mid_num;

	mid_num = get_mid_index(list_a, 0);
	//printf("mid_num:%d\n", mid_num);
	i = 1;
	while ((monitor_a->count) > 0)
	{
		while (is_num_in_block(list_a, i))
		{
			if ((*list_a)->block == i)
			{
				ft_print_pb_extra(list_a, list_b, monitor_a, monitor_b);
				//printf("list_bIND:%d\n", (*list_b)->index);
				if ((*list_b)->index < mid_num)//okashiiii!!!!!!!!!!
					ft_print_rb_extra(list_b, monitor_b);
				//printf("list_bIND:%d\n", (*list_b)->index);
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

	halfblock_num = argc / 12;
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
	print_list_a(list_a);
	send_mid_to_b(list_a, list_b, monitor_a, monitor_b);
	free(monitor_a);
	free(monitor_b);
	return (list_a);
}
