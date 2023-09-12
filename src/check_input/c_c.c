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

int	check_duplicate(int *c2i, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			// printf("c2i[%d]:%d\tc2i[%d]:%d\n", i, c2i[i], j, c2i[j]);
			if (c2i[i] == c2i[j])
				put_error(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*bubble_sort(int *sorted_intager, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if ((sorted_intager[j] - sorted_intager[j + 1]) > 0)
				swap_int(&sorted_intager[j], &sorted_intager[j + 1]);
			j++;
		}
		i++;
	}
	return (sorted_intager);
}

void	cc_while(int *sorted_intager, int *new_coordinate, int *c2i, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if ((sorted_intager[i] == c2i[j]))
				new_coordinate[j] = i;
			j++;
		}
		i++;
	}
}

int	*coordinate_compress(int *c2i, int len)
{
	int		*new_coordinate;
	int		*sorted_intager;

	new_coordinate = malloc(sizeof(int) * (len));
	if (new_coordinate == NULL)
		exit(EXIT_FAILURE);
	sorted_intager = malloc(sizeof(int) * (len));
	if (sorted_intager == NULL)
		exit(EXIT_FAILURE);
	ft_memcpy(sorted_intager, c2i, len * sizeof(int));
	sorted_intager = bubble_sort(sorted_intager, len);
	cc_while(sorted_intager, new_coordinate, c2i, len);
	ft_is_sorted(new_coordinate, len);
	free(sorted_intager);
	return (new_coordinate);
}
