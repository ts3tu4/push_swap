/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:40:37 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:30:10 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_node *node)
{
	int		len;

	len = 0;
	while (node != NULL)
	{
		node = node -> next;
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	t_node	**lst;
// 	t_node	*elem1;
// 	t_node	*elem2;
// 	t_node	*elem3;
// 	t_node	*elem4;
// 	t_node	*elem5;
// 	char	s1[10];
// 	char	s2[10];
// 	char	s3[10];
// 	int		val4;
// 	int		val5;

// 	strcpy(s1, "hello");
// 	strcpy(s2, "42");
// 	strcpy(s3, "tokyo");
// 	val4 = 42;
// 	val5 = -42;
// 	elem1 = ft_calloc(sizeof(t_node), 1);
// 	elem2 = ft_calloc(sizeof(t_node), 1);
// 	elem3 = ft_calloc(sizeof(t_node), 1);
// 	elem4 = ft_calloc(sizeof(t_node), 1);
// 	elem5 = ft_calloc(sizeof(t_node), 1);
// 	elem1 -> content = s1;
// 	elem2 -> content = s2;
// 	elem3 -> content = s3;
// 	elem4 -> content = &val4;
// 	elem5 -> content = &val5;
// 	lst = (t_node **)malloc(sizeof(t_node *));
// 	*lst = elem1;
// 	elem1 -> next = elem2;
// 	elem2 -> next = elem3;
// 	elem3 -> next = elem4;
// 	elem4 -> next = elem5;
// 	elem5 -> next = NULL;
// 	printf("count:%d\n---------\n", ft_lstsize(*lst));
// 	return (0);
// }
