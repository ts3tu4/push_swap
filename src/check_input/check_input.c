/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/06 19:43:08 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

long int	is_over_intmax(char *argv)
{
	int		pm;
	long	ans;

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

// int	is_overlap(char *argv)
// {
	
// }

int	*change_int_ptr(char ***splited_argv, int argc)
{
	int		*tmp;
	size_t	i;
	size_t	j;
	size_t	k;

	tmp = malloc(sizeof(int) * argc);
	i = 0;
	j = 0;
	k = 0;
	while (!**splited_argv[k])
	{
		while (!*splited_argv[j])
		{
			tmp[i] = push_swap_atoi(*splited_argv[j]);
			printf("tmp%ls\n", tmp);
			i++;
			j++;
		}
		j = 0;
		k++;
	}
	return (tmp);
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
		printf("split_argv %s\n", *splited_argv[i]);
		if (is_over_intmax(*splited_argv[i++]) == 1)
			put_error(1);
	}
	change_int_ptr(splited_argv, argc);
	free(splited_argv);
	return (0);
}
