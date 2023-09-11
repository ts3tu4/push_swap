/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_c_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:54:15 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/18 17:16:18 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_is_sorted(int *cc, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (cc[i] > cc[i + 1])
			return ;
		i++;
	}
	exit(EXIT_FAILURE);
}

void	swap_int(int *n, int *m)
{
	int	tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}
