/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:01:53 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:29:32 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// int	main(void)
// {
// 	t_node	*lst;
// 	t_node	*check;
// 	t_node	*elem1;
// 	t_node	*elem2;
// 	t_node	*elem3;
// 	char	s1[10];
// 	char	s2[10];
// 	char	s3[10];

// 	strcpy(s1, "hello");
// 	strcpy(s2, "42");
// 	strcpy(s3, "tokyo");
// 	elem1 = ft_lstnew(s1);
// 	elem2 = ft_lstnew(s2);
// 	elem3 = ft_lstnew(s3);
// 	lst = elem3;
// 	ft_lstadd_front(&lst, elem2);
// 	ft_lstadd_front(&lst, elem1);
// 	check = ft_lstlast(lst);
// 	printf("ft_lstlast:%s", check -> content);
// 	return (0);
// }
