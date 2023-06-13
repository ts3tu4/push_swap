/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:01:11 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/13 22:03:35 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_int_free(int a)
{
	(void)a;
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

void	len_free(char **c, size_t	len)
{
	size_t	i;

	i = 0;
	while (i < len)
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
