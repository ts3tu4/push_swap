/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:29:37 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 21:19:59 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	split6(t_node **list_a, int argc)
{
	int		index_num;
	int		oneblock_num;
	size_t	i;
	size_t	j;
	t_node	*tmp;

	index_num = argc;
	oneblock_num = index_num / 6;
	tmp = *list_a;
	j = 1;
	while (tmp != NULL)
	{
		i = 1;
		while ((j <= 5 && i <= oneblock_num) || (j == 6 && tmp != NULL))
		{
			tmp->block = j;
			tmp = tmp->next;
			i++;
		}
		j++;
	}
}

t_node	**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc)
{
	t_monitor	*monitor_a;
	t_monitor	*monitor_b;

	monitor_a = ft_makemonitor(list_a);
	monitor_b = ft_makemonitor(list_b);
	split6(list_a, argc);
	free(monitor_a);
	free(monitor_b);
	return (list_a);
}
