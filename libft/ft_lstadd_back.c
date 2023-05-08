/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:44:08 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/11 14:18:45 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

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
//    t_list    *ts0;
//    t_list    *ts1;
//    t_list    *ts2;
//    t_list    **plst;
//    t_list    *rdptr;
//
//	plst =(t_list **)malloc(sizeof(t_list *));
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
