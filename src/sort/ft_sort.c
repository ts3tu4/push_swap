/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:17:11 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/21 20:54:44 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	**ft_three_or_less(t_node **list_a, int argc)
{
	if (argc == 3)
		ft_two_sort(list_a);
	// else
	// 	ft_three_sort(list_a);
	return (list_a);
}

// t_node	**ft_five_or_less(t_node **list_a, t_node **list_b, int argc)
// {
// 	if (argc == 5)
// 		ft_four_sort(list_a, list_b);
// 	else
// 		ft_six_sort(list_a, list_b);
// 	return (list_a);
// }

t_node	**ft_sort(t_node **list_a, int argc)
{
	if (argc <= 4)
		ft_three_or_less(list_a, argc);
	// else if (argc <= 6)
	// 	ft_five_or_less(list_a, list_b, argc);
	// else if (argc > 6)
	// 	ft_six_or_more(list_a, list_b, argc);
	return (list_a);
}
