/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:44:08 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:29:53 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	tmp = ft_lstlast(*lst);
	if (tmp == NULL)
		*lst = new;
	else
		tmp ->next = new;
}

//int    main(void)
//{
//    char    s0[] = "The brown fox ";
//    char    s1[] = "jumps over ";
//    char    s2[] = "the lazy dog.";
//    t_node    *ts0;
//    t_node    *ts1;
//    t_node    *ts2;
//    t_node    **plst;
//    t_node    *rdptr;
//
//	plst =(t_node **)malloc(sizeof(t_node *));
//    ts0 = ft_lstnew(s0);
//    if (ts0 == NULL)
//    {
//        printf("create node error for s0\n");
//        return (1);
//    }
//    ts1 = ft_lstnew(s1);
//    if (ts1 == NULL)
//    {
//        printf("create node error s1\n");
//        free(ts0);
//        return (1);
//    }
//    ts2 = ft_lstnew(s2);
//    if (ts2 == NULL)
//    {
//        printf("create node error s2\n");
//        free(ts0);
//        free(ts1);
//        return (1);
//    }
//    *plst = ts0;
//    ft_lstadd_back(plst, ts1);
//    ft_lstadd_back(plst, ts2);
//    rdptr = *plst;
//    while (rdptr != NULL)
//    {
//        printf("%s", (char *)rdptr->content);
//        rdptr = rdptr->next;
//    }
//    free(ts0);
//    free(ts1);
//    free(ts2);
//}
//__attribute__((destructor))
//static void destructor() {
//    system("leaks -q a.out");
//}
