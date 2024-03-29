/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:01:11 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/18 17:14:42 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_int_free(int *a)
{
	if (a != NULL)
		free(a);
}

void	all_free(char **c)
{
	size_t	i;

	i = 0;
	while (c[i] != NULL)
	{
		free(c[i]);
		i++;
	}
	free(c);
}

void	free_list(t_node **list)
{
	t_node	*tmp;

	while (*list != NULL)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
}

void	step_by_step_free(char **c, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(c[j]);
		j++;
	}
	free(c);
}
