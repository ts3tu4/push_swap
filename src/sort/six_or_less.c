/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six_or_less.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 00:34:31 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/25 14:34:20 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	get_min_index(t_node **list_a)
{
	int		min_index;
	t_node	*tmp;

	tmp = *list_a;
	min_index = tmp->index;
	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (tmp->index < min_index)
			min_index = tmp->index;
	tmp = tmp->next;
	}
	return (min_index);
}

void	move_min_to_b(t_node **list_a, t_node **list_b)
{
	int	min_index;

	if (!list_a || !(*list_a))
		return ;
	min_index = get_min_index(list_a);
	while ((*list_a) && ((*list_a)->index != min_index))
		ft_print_ra(list_a);
	if (list_a && *list_a)
		ft_print_pb(list_a, list_b);
}

t_node	return_from_b(t_node **list_a, t_node **list_b)
{
	while ((*list_b) != NULL)
		ft_print_pa(list_a, list_b);
	return (**list_a);
}

t_node	**ft_six_or_less(t_node **list_a, t_node **list_b, int argc)
{
	int	num;

	num = argc;
	while (num > 3)
	{
		move_min_to_b(list_a, list_b);
		num -= 1;
	}
	ft_three_sort(list_a);
	return_from_b(list_a, list_b);
	return (list_a);
}
