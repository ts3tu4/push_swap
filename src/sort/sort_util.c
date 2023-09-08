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

int	get_min_index(t_node **list_a, int comp_num)
{
	int		min_index;
	t_node	*tmp;

	tmp = *list_a;
	min_index = tmp->index;
	tmp = tmp->next;
	while (tmp != NULL)
	{
		if (tmp->index < comp_num)
			tmp = tmp->next;
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

int	get_mid_index(t_node **list_a, int comp_num)
{
	int	min_index;
	int	mid_index;
	int	max_index;

	min_index = get_min_index(list_a, comp_num);
	max_index = get_max_index(list_a);
	mid_index = ((max_index - min_index) / 2) + min_index;
	return (mid_index);
}

int	get_quater_index(t_node **list_a, int comp_num)
{
	int	mid_index;
	int	min_index;
	int	quater_index;

	min_index = get_min_index(list_a, comp_num);
	mid_index = get_mid_index(list_a, comp_num);
	quater_index = ((mid_index - min_index) / 2) + min_index;
	return (quater_index);
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
