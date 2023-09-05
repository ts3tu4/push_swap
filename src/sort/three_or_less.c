/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:18:09 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/22 17:19:03 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	**ft_three_sort(t_node **list_a)
{
	int	second;

	if (!list_a || !(*list_a) || !(*list_a)->next)
		return (list_a);
	while (1)
	{
		if (!(is_index_not_sorted(list_a)))
			break ;
		second = (*list_a)->next->index;
		if ((((*list_a)->index) - second) == 1
			|| (((*list_a)->index) - second) == -2)
			ft_print_sa(list_a);
		else if (((*list_a)->index) - second == -1)
			ft_print_rra(list_a);
		else if (((*list_a)->index) - second == 2)
			ft_print_ra(list_a);
	}
	return (list_a);
}
