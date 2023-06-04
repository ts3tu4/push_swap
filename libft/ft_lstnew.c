/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:00 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:30:06 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_node	*ft_lstnew(void *content)
{
	t_node	*node1;

	node1 = malloc(sizeof(t_node));
	if (!node1)
		return (NULL);
	node1 -> content = content;
	node1 -> next = NULL;
	return (node1);
}

// int	main(void)
// {
// 	t_node	*check;

// 	check = ft_lstnew("abaaba");
// 	printf("content value:%s", check->content);
// 	return (0);
// }
