/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:32:57 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/18 16:25:50 by mnanke           ###   ########.fr       */
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
	cc = check_input_return_cc(argc, argv);
	free(cc);
	if (cc == NULL)
		exit(EXIT_FAILURE);
	input_list(argv, list_a);
	free_list(list_a);
	free_list(list_b);
	free(list_a);
	free(list_b);
}

__attribute__((destructor)) static void destructor()
{
	system("leaks push_swap");
}
