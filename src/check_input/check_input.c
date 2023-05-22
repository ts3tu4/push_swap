/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/16 18:26:40 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

long int	is_intmax(char *argv)
{
	int		pm;
	long	ans;
	long	lm_div;

	lm_div = LONG_MAX / 10;
	pm = 1;
	ans = 0;
	if (*argv == '-' || *argv == "+")
	{
		if (*argv == '-')
			pm *= -1;
		argv ++;
	}
	
}

int	check_input(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (!ft_isdigit(*argv))
		is_error(1);
	if (is_intmax(*argv) > INT_MAX)
		is_error(1);
}
