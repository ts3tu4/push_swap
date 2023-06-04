/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:36:53 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:29:43 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst, void (*del)(void *))
{
	t_node	*node_p;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		node_p = (*lst)->next;
		ft_lstdelone(*lst, (del));
		*lst = node_p;
	}
	*lst = NULL;
}
