/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_c.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:09:47 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/22 15:58:57 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s2 != '\0' || *s1 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

int	check_duplicate(char **splited_argv)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (splited_argv[i] != NULL)
	{
		j = i + 1;
		while (splited_argv[j] != NULL)
		{
			if (ft_strcmp(splited_argv[i], splited_argv[j]) == 0)
				put_error(1);
			j++;
		}
		i++;
	}
	return (0);
}

void	bubble_sort(char **splited_argv, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (ft_strcmp(splited_argv[j], splited_argv[j + 1]) > 0)
				swap_str(&splited_argv[j], &splited_argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	*coordinate_compress(char **splited_argv, int len)
{
	int		i;
	size_t	j;
	int		*new_coordinate;
	char	**sorted_arg;

	new_coordinate = malloc(sizeof(int) * (len));
	if (new_coordinate == NULL)
		exit(EXIT_FAILURE);
	sorted_arg = duplicate_array(splited_argv, len);
	bubble_sort(sorted_arg, len);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (splited_argv[j])
		{
			if ((ft_strcmp(sorted_arg[i], splited_argv[j])) == 0)
				new_coordinate[j] = i;
			j++;
		}
		i++;
	}
	all_free(sorted_arg);
	all_free(splited_argv);
	return (new_coordinate);
}
