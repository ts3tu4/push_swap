/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/06 17:44:17 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

long int	is_over_intmax(char *argv)
{
	int		pm;
	long	ans;
	long	im_div;

	im_div = INT_MAX / 10;
	pm = 1;
	ans = 0;
	if (*argv == '-' || *argv == '+')
	{
		if (*argv == '-')
			pm *= -1;
		argv ++;
	}
	if (!ft_isdigit (*argv))
		return (1);
	while (*argv && ft_isdigit(*argv))
	{
		ans = ans * 10 + *argv++ - '0';
		if (ans * pm > INT_MAX || ans * pm < INT_MIN)
			return (1);
	}
	return (0);
}

int	is_overlap(char *argv)
{
	
}

int	**check_input(int argc, char **argv)
{
	char	***splited_argv;
	size_t	i;

	if (argc == 1)
		return (NULL);
	splited_argv = malloc(sizeof(char ***) * argc);
	if (splited_argv == NULL)
		return (NULL);
	i = 1;
	while (argv[i] != NULL)
	{
		splited_argv[i - 1] = ft_split(argv[i], ' ');
		i++;
	}
	splited_argv[i - 1] = NULL;
	i = 0;
	while (splited_argv[i] != NULL)
	{
		if (is_over_intmax(*splited_argv[i++]) == 1)
			put_error(1);
	}
	if (is_overlap(*splited_argv[i++]) == 1)
		put_error(1);
	free(splited_argv);
	return (0);
}
