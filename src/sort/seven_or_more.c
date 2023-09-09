/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:29:37 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 21:19:59 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	split6_search(t_node **list_a, t_node *tmp,
	int mid_num, int halfblock_num)
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
			tmp->block = split6_search(list_a, tmp, mid_num, halfblock_num);
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
	free(monitor_a);
	free(monitor_b);
	return (list_a);
}
