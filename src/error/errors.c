/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:01:11 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:23:35 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

void	put_error(int a)
{
	if (a)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

void	ft_free_error(int a)
{
	(void)a;
}
