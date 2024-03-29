/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/23 17:10:42 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

long int	is_over_intmax(char *argv)
{
	int			pm;
	long long	ans;

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
	if (*argv && !ft_isdigit(*argv))
		return (1);
	return (0);
}

char	**allocate_for_args(int *argc, char **argv)
{
	size_t	num;
	int		i;
	int		j;
	char	**splited_arg;
	char	**allcate_aplited_arg;

	i = 0;
	num = 0;
	while (i < *argc)
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
	allcate_aplited_arg = malloc(sizeof(char *) * (num + 1));
	if (allcate_aplited_arg == NULL)
		exit (EXIT_FAILURE);
	return (allcate_aplited_arg);
}	

char	**split_all_args(int *argc, char **argv)
{
	char	**splited_argv;
	int		i;
	int		j;
	size_t	num;
	char	**tmp;

	splited_argv = allocate_for_args(argc, argv);
	i = 1;
	num = 0;
	while (i < *argc)
	{
		tmp = ft_split(argv[i], ' ');
		arg_check(tmp);
		j = 0;
		while (tmp[j] != NULL)
		{
			splited_argv[num] = ft_strdup(tmp[j]);
			j++;
			num++;
		}
		all_free(tmp);
		i++;
	}
	splited_argv[num] = NULL;
	return (splited_argv);
}

int	char_to_int(char *splited_argv)
{
	int		c2i;
	int		pm;

	pm = 1;
	if (*splited_argv == '-' || *splited_argv == '+')
	{
		if (*splited_argv == '-')
			pm *= -1;
		splited_argv++;
	}
	c2i = 0;
	while (*splited_argv && ft_isdigit(*splited_argv))
		c2i = c2i * 10 + *splited_argv++ - '0';
	return (c2i * pm);
}

int	*check_input_return_cc(int *argc, char **argv)
{
	char	**splited_argv;
	int		*c2i;
	int		*cc;
	int		len;

	if (*argc == 1)
		return (NULL);
	splited_argv = split_all_args(argc, argv);
	*argc = splited_len(splited_argv);
	c2i = malloc(sizeof(int) * (*argc));
	if (!c2i)
		return (NULL);
	len = 0;
	while (len < *argc)
	{
		if (is_over_intmax(splited_argv[len]) == 1)
			put_error();
		c2i[len] = char_to_int(splited_argv[len]);
		len++;
	}
	check_duplicate(c2i, len);
	cc = coordinate_compress(c2i, len);
	free(c2i);
	all_free(splited_argv);
	return (cc);
}
