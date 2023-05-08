/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:45:00 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/07 20:19:23 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list1;

	list1 = malloc(sizeof(t_list));
	if (!list1)
		return (NULL);
	list1 -> content = content;
	list1 -> next = NULL;
	return (list1);
}

// int	main(void)
// {
// 	t_list	*check;

// 	check = ft_lstnew("abaaba");
// 	printf("content value:%s", check->content);
// 	return (0);
// }
