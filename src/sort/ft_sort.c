/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:17:11 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/25 14:30:22 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	**ft_three_or_less(t_node **list_a, int argc)
{
	
	if (argc == 2)
		ft_print_sa(list_a);
	else
		ft_three_sort(list_a);
	return (list_a);
}

t_node	**ft_sort(t_node **list_a, t_node **list_b, int argc)
{
	if (argc <= 3)
		ft_three_or_less(list_a, argc);
	else if (4 <= argc && argc <= 6)
		ft_six_or_less(list_a, list_b, argc);
	// else if (argc > 6)
	// 	ft_six_or_more(list_a, list_b, argc);
	return (list_a);
}
