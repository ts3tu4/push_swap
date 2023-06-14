/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression_utils.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:54:15 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/14 13:34:29 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

char	**duplicate_array(char **orig_array, size_t len)
{
	size_t	i;
	size_t	j;
	char	**new_array;

	new_array = malloc(sizeof(char *) * len);
	if (new_array == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		new_array[i] = ft_strdup(orig_array[i]);
		if (new_array[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(new_array[j]);
				j++;
			}
			free(new_array);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (new_array);
}

void	swap_str(char	**str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}
