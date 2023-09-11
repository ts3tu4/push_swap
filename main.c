/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:32:57 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 21:26:58 by mnanke           ###   ########.fr       */
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
	input_list(list_a, cc, argc);
	//print_list_a(list_a); //del
	ft_sort(list_a, list_b, argc);
	//print_list_a(list_a); //del
	free_list(list_a);
	free_list(list_b);
	free(list_a);
	free(list_b);
	return (0);
}

__attribute__((destructor)) static void destructor()
{
	system("leaks push_swap");
}
