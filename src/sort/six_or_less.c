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
	int	min_index;

	min_index = (*list_a)->index;
	*list_a = (*list_a)->next;
	while ((*list_a) != NULL)
	{
		if ((*list_a)->index < min_index)
			min_index = (*list_a)->index;
		*list_a = (*list_a)->next;
	}
	return (min_index);
}

void	move_min_to_b(t_node **list_a, t_node **list_b)
{
	while ((*list_a)->index != get_min_index(*list_a))
		ft_rotate(list_a);
	ft_push(list_a, list_b);
}

t_node	**ft_six_or_less(t_node **list_a, t_node **list_b, int argc)
{
	int	num;

	num = argc;
	while (num > 3)
		move_min_to_b(list_a, list_b);
	//3tu sort owattara listb kara modosu
	return (list_a);
}