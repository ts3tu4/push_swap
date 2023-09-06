/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:07:48 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/03 18:32:16 by mnanke           ###   ########.fr       */
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

int	get_max_index(t_node **list_a)
{
	int		max_index;
	t_node	*tmp;

	tmp = *list_a;
	max_index = tmp->index;
	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
	tmp = tmp->next;
	}
	return (max_index);
}

int	is_index_not_sorted(t_node **list_a)
{
	t_node	*second;
	t_node	*tmp;

	if (!list_a || !(*list_a))
		return (0);
	tmp = *list_a;
	second = tmp->next;
	while (tmp != NULL && second != NULL)
	{
		if (tmp->index > second->index)
			return (1);
		second = second->next;
		tmp = tmp->next;
	}
	return (0);
}

int	sortednum_to_abot(t_node **list_a, t_node **list_b, int b_num)
{
	size_t	i;
	size_t	j;
	int		comp_num;

	i = b_num;
	j = i / 2;
	while (0 < i)
	{
		if (i <= 3 || !(is_index_not_sorted(list_b)))
		{
			if (i <= 3)
				ft_three_sort(list_b);
			while (i < 0)
			{
				ft_print_pa(list_a, list_b);
				ft_print_ra(list_a);
				comp_num++;
				i--;
			}
			break ;
		}
	}
	return (comp_num);
}
//未完成 B-Numの中が3個かソートされてたらソートしてAの下に置く
