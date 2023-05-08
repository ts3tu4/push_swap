/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:36:53 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/11 17:51:21 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_p;

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
