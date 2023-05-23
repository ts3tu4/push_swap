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
	while (*argv && ft_isdigit(*argv))
	{
		if (ans > lm_div || (ans == lm_div && *argv - '0' > LONG_MAX % 10))
			return (NULL);
		ans = ans * 10 + *argv++ - '0';
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (!is_intmax(*argv))
		is_error(1);
}
