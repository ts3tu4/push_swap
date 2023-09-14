/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:34:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 19:10:58 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	*newlist(int cc)
{
	t_node	*nodeptr;	

	nodeptr = malloc(sizeof(t_node));
	if (!nodeptr)
		exit (EXIT_FAILURE);
	nodeptr->prev = NULL;
	nodeptr->index = cc;
	nodeptr->block = 0;
	nodeptr->next = NULL;
	return (nodeptr);
}

t_node	**ft_makelist(void)
{
	t_node	**list_a;

	list_a = malloc(sizeof(t_node *));
	if (list_a == NULL)
		exit(EXIT_FAILURE);
	*list_a = NULL;
	return (list_a);
}

t_node	**input_list(t_node **list_a, int *cc, int argc)
{
	t_node	*tmp;
	int		i;

	i = 0;
	while (i < argc)
	{
		tmp = newlist(cc[i]);
		ft_lstadd_back(list_a, tmp);
		i++;
	}
	return (list_a);
}
