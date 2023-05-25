/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:34:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/16 18:05:58 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_node	**ft_makelist(t_node **list_a)
{
	list_a = malloc(sizeof(t_node *));
	if (list_a == NULL)
		exit(EXIT_FAILURE);
	*list_a = NULL;
	return (list_a);
}

t_node	input_list(char **noerror_argv, t_node **list_a, t_node **list_b);
{
	t_node	*tmp;

	tmp = ft_newlist(num)
}