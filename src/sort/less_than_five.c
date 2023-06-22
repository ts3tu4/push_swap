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
	t_node	*second;

	second = (*list_a)->next;
	if ((*list_a)->index == 2 && second->index == 0)
		ft_print_ra(list_a);
	
	return (list_a);
}
