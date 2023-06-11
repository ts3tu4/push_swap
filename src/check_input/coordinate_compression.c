/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:09:47 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/11 19:38:10 by mnanke           ###   ########.fr       */
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

int	*coordinate_compress(char **splited_argv, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*tmp;
	char	*splited_arg_box;
	int		*new_coordinate;

	splited_arg_box = splited_argv;
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (ft_strcmp(splited_arg_box[j], splited_arg_box[j + 1]) > 0)
			{
				tmp = splited_arg_box[j];
				splited_arg_box[j] = splited_arg_box[j + 1];
				splited_arg_box[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (i == 0 || ft_strcmp(splited_argv[i], splited_argv[i - 1]) != 0)/dame
		{
			new_coordinate = i + 1;
			free(splited_argv[i]);
			splited_argv[i] = ft_itoa(new_coordinate);
			printf("splited_argv[%lu]:%s\n", i, splited_argv[i]);
		}
		i++;
	}
	return (splited_argv);
}
