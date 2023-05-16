/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:32:57 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/16 18:08:59 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;

	check_input(argc, argv);
	list_a = ft_makelist(list_a);
	list_b = ft_makelist(list_b);
	
	
}



__attribute__((destructor)) static void destructor()
{
	system("leaks -q push_swap");
}
