/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/24 20:23:59 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

long int	is_over_intmax(char *argv)
{
	int		pm;
	long	ans;
	long	im_div;

	im_div = INT_MAX / 10;
	pm = 1;
	ans = 0;
	if (*argv == '-' || *argv == "+")
	{
		if (*argv == '-')
			pm *= -1;
		argv ++;
	}
	if (!ft_isdigit (argv))
		return (1);
	while (*argv && ft_isdigit(*argv))
	{
		if (ans > im_div || (ans == im_div && *argv - '0' > INT_MAX % 10))
			return (NULL);
		ans = ans * 10 + *argv++ - '0';
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	char	**splited_argv;

	if (argc == 1)
		return (0);
	i = 1;
	j = 0;
	while (!*argv[i++])
		splited_argv[j++] = ft_split(*argv[i++], " ");
	i = 0;
	while (!*splited_argv[i++])
	{
		if (!is_over_intmax(*splited_argv[i++]))
			put_error(1);
	}
}
