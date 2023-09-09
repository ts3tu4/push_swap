/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:34:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 18:19:38 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_node	*newlist(int cc)
{
	t_node	*nodeptr;	

	nodeptr = malloc(sizeof(t_node));
	if (!nodeptr)
		return (NULL);
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

t_node	**input_list(char **argv, t_node **list_a, int *cc)
{
	t_node	*tmp;
	size_t	i;
	size_t	j;
	char	**splited_argv;

	i = 1;
	splited_argv = NULL;
	while (argv[i] != NULL)
	{
		splited_argv = ft_split(argv[i], ' ');
		j = 0;
		while (splited_argv[j] != NULL)
		{
			tmp = newlist(*cc++);
			if (tmp == NULL)
				free(tmp);
			ft_lstadd_back(list_a, tmp);
			j++;
		}
		all_free(splited_argv);
		i++;
	}
	return (list_a);
}

t_monitor	*ft_makemonitor(t_node **list_a)
{
	t_monitor	*monitor;

	monitor = malloc(sizeof(t_monitor));
	if (!monitor)
		return (NULL);
	monitor->top = *list_a;
	monitor->bottom = ft_lstlast(list_a);
	monitor->count = ft_lstsize(list_a);
	return (monitor);
}
