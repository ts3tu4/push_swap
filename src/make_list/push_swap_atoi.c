/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:46:26 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/27 17:47:23 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

long int	push_swap_atoi(char *argv)
{
	int		pm;
	long	ans;

	pm = 1;
	ans = 0;
	if (*argv == '-' || *argv == "+")
	{
		if (*argv == "-")
		pm *= -1;
		argv ++;
	}
	while (*argv)
		ans = ans * 10 + *argv++ - '0';
	return (ans);
}
