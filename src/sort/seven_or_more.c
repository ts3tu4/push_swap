/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:44:35 by mnanke            #+#    #+#             */
/*   Updated: 2023/08/28 22:52:28 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	divide_to_b(t_node **list_a, t_node **list_b, int num)
{
	int		half_num;
	int		quarter_num;
	size_t	i;
	size_t	j;

	half_num = num / 2;
	quarter_num = half_num / 2;
	i = 0;
	j = 0;
	while (i <= num)
	{
		if (((*list_a)->index) <= half_num)
		{
			ft_print_pb(list_a, list_b);
			if ((*list_b)->index >= quarter_num)
				ft_print_rb(list_b);
			j++;
			if (j == half_num)
				break ;
		}
		else
			ft_print_ra(list_a);
		i++;
	}
}

void	sort_in_b(t_node **list_a, t_node **list_b, int num)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= num)
	{
		if ((*list_b)->index - (*list_b)->next->index == -1)//oko na kigasuru
			ft_print_rb(list_b);
		else
			ft_print_sb(list_b);
		i++;
	}
}

t_node	**quick_sort_b(t_node **list_a, t_node **list_b, int num)
{
	size_t	i;

	divide_to_b(list_a, list_b, num);
	sort_in_b(list_a, list_b, num);
	i = 0;
	while (i <= num)
	{
		ft_print_pa(list_a, list_b);
		i++;
	}
	return (list_a);
}

t_node	**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc)
{
	int	num;

	num = argc;
	//num 100 to 500de wakeruno 
	quick_sort_b(list_a, list_b, num);
	retrun (list_a);
}
