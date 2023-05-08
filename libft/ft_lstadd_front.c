/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:18:12 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/11 16:56:35 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	*lst = new;
}

// int    main(void)
// {
//     char    s0[] = "The brown fox ";
//     char    s1[] = "jumps over ";
//     char    s2[] = "the lazy dog.";
//     t_list    *ts0;
//     t_list    *ts1;
//     t_list    *ts2;
//     t_list    **plst;
//     t_list    *rdptr;

// 	plst =(t_list **)malloc(sizeof(t_list *));
//     ts0 = ft_lstnew(s0);
//     if (ts0 == NULL)
//     {
//         printf("create node error for s0\n");
//         return (1);
//     }
//     ts1 = ft_lstnew(s1);
//     if (ts1 == NULL)
//     {
//         printf("create node error s1\n");
//         free(ts0);
//         return (1);
//     }
//     ts2 = ft_lstnew(s2);
//     if (ts2 == NULL)
//     {
//         printf("create node error s2\n");
//         free(ts0);
//         free(ts1);
//         return (1);
//     }
//     *plst = ts2;
//     ft_lstadd_front(plst, ts1);
//     ft_lstadd_front(plst, ts0);
//     rdptr = *plst;
//     while (rdptr != NULL)
//     {
//         printf("%s", (char *)rdptr->content);
//         rdptr = rdptr->next;
//     }
//     free(ts0);
//     free(ts1);
//     free(ts2);
// }