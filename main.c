/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:32:57 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/22 16:16:14 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;
	int		*cc;

	list_a = NULL;
	list_b = NULL;
	list_a = ft_makelist();
	list_b = ft_makelist();
	cc = check_input_return_cc(&argc, argv);
	if (cc == NULL)
		exit(EXIT_FAILURE);
	input_list(argv, list_a, cc);
	print_list_a(list_a); //del
	ft_sort(list_a, list_b, argc);
	print_list_a(list_a); //del
	free_list(list_a);
	free_list(list_b);
	free(list_a);
	free(list_b);
}

void	print_list_a(t_node **list_a)
{
	while ((*list_a) != NULL)
	{
		printf("a = [%d]\t:\t%p\t%p\t%p\n",
			(*list_a)->index, (*list_a)->prev,
			(*list_a), (*list_a)->next);
		list_a = &(*list_a)->next;
	}
	while ((*list_a) != NULL)
		list_a = &(*list_a)->prev;
}


__attribute__((destructor)) static void destructor()
{
	system("leaks push_swap");
}
