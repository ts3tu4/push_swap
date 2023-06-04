/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:34:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:37:21 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

// size_t	coordinate_compression(int noerror_argv)
// {
	
	
// }

t_node	*newlist(int noerror_argv)
{
	t_node	*nodeptr;

	nodeptr = malloc(sizeof(t_node));
	if (!nodeptr)
		return (NULL);
	nodeptr->prev = NULL;
	nodeptr->num = noerror_argv;
	nodeptr->index = 0;
	nodeptr->next = NULL;
	return (nodeptr);
}

t_node	**ft_makelist(t_node **list_a)
{
	list_a = malloc(sizeof(t_node *));
	if (list_a == NULL)
		exit(EXIT_FAILURE);
	*list_a = NULL;
	return (list_a);
}

t_node	**input_list(char **argv, t_node **list_a)
{
	t_node	*tmp;
	size_t	i;
	size_t	j;
	char	***splited_argv;
	int		noerror_argv;

	i = 0;
	j = 0;
	splited_argv = NULL;
	while (!argv[i])
		splited_argv[j++] = ft_split(argv[i++], ' ');
	while (!splited_argv[i])
	{
		noerror_argv = push_swap_atoi(*splited_argv[i++]);
		// j = coordinate_compression(noerror_argv);
		tmp = newlist(noerror_argv);
		if (tmp == NULL)
			ft_free_error(1);
		ft_lstadd_back(list_a, tmp);
	}
	return (list_a);
}
