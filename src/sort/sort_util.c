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
