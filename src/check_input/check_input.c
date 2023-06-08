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

size_t	count_numbers_in_args(int argc, char **argv)
{
	size_t	num;
	int		i;
	int		j;
	char	**splited_arg;

	i = 0;
	num = 0;
	while (i < argc)
	{
		splited_arg = ft_split(argv[i], ' ');
		j = 0;
		while (splited_arg[j] != NULL)
		{
			num++;
			j++;
		}
		j = 0;
		all_free(splited_arg);
		i++;
	}
	return (num);
}	

char	**split_all_args(int argc, char **argv) //ここ分ける
{
	char	**splited_argv;
	int		i;
	int		j;
	size_t	num;
	char	**tmp;

	num = count_numbers_in_args(argc, argv);
	splited_argv = malloc((num + 1) * sizeof(char *));
	if (splited_argv == NULL)
		return (NULL);
	i = 1;
	num = 0;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		j = 0;
		while (tmp[j] != NULL)
		{
			splited_argv[num] = tmp[j];
			j++;
			num++;
		}
		free(tmp);
		i++;
	}
	splited_argv[num] = NULL;
	return (splited_argv);
}

int	**check_input(int argc, char **argv)
{
	size_t	i;
	char	**splited_argv;

	if (argc == 1)
		return (NULL);
	i = 0;
	splited_argv = split_all_args(argc, argv);
	while (splited_argv[i] != NULL)
	{
		printf("splited_argv%s\n", splited_argv[i]);
		if (is_over_intmax(splited_argv[i]) == 1)
			put_error(1);
		i++;
	}
	return (0);
}
