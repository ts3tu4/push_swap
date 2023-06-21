/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_three_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:18:09 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/21 20:59:28 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	**ft_two_sort(t_node **list_a)
{
	t_node	*tmp;

	tmp = (*list_a)->next;
	if ((*list_a)-> index > tmp->index)
		ft_print_sa(list_a);
	return (list_a);
}

// t_node	**ft_three_sort(t_node **list_a)
// {
// 	t_node	*tmp;

// 	tmp
// }
