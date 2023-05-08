/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:01:53 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/11 14:28:25 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*check;
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*elem3;
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
