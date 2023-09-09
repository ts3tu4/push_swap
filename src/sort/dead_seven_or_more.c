/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:44:35 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/09 19:28:55 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

// 半分をｂに移してそのあと半分以上と以下にソート
void	divide_to_b(t_node **list_a, t_node **list_b,
	int sort_num, int comp_num)
{
	int		mid_num;
	int		quarter_num;
	size_t	i;
	size_t	j;

	mid_num = get_mid_index(list_a, comp_num);
	quarter_num = quater_index(list_a, comp_num);
	i = 0;
	j = 0;
	while (i <= sort_num)
	{
		if (((*list_a)->index) <= mid_num)
		{
			ft_print_pb(list_a, list_b);
			if ((*list_b)->index <= quarter_num || j > 0)
				ft_print_rb(list_b);
			j++;
			if (j == mid_num)
				break ;
		}
		else
			ft_print_ra(list_a);
		i++;
	}
}

//ｂの半分より上の数値をAに戻して戻した数を返す
int	push_halfgreatervalues(t_node **list_a, t_node **list_b, int comp_num)
{
	int		mid_num;
	size_t	count;

	mid_num = get_mid_index(list_b, comp_num);
	count = 0;
	while (count <= mid_num)
	{
		ft_print_pa(list_a, list_b);
		count++;
	}
	return (count);
}

//bを半分ソート
void	sort_in_b(t_node **list_a, t_node **list_b, int b_num, int comp_num)
{
	size_t	i;
	size_t	j;

	i = b_num;
	j = i / 2;
	while (0 < i)
	{
		comp_num += sortednum_to_abot(list_a, list_b, b_num);
		if (((*list_b)->index) >= j)
		{
			ft_print_pa(list_a, list_b);
			ft_print_rb(list_b);
		}
	}
}

//未完成 B-Numの中が3個かソートされてたらソートしてAの下に置く
int	sortednum_to_abot(t_node **list_a, t_node **list_b, int b_num, int comp_num)
{
	size_t	i;
	size_t	j;

	i = b_num;
	j = i / 2;
	while (0 < i)
	{
		if (i <= 3 || !(is_index_not_sorted(list_b)))
		{
			if (i <= 3)
				ft_three_sort(list_b);
			while (i < 0)
			{
				ft_print_pa(list_a, list_b);
				ft_print_ra(list_a);
				comp_num++;
				i--;
			}
			break ;
		}
	}
	return (comp_num);
}

t_node	**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc)
{
	int			comp_num;
	int			sort_num;
	int			b_num;
	t_monitor	*monitor_a;
	t_monitor	*monitor_b;

	sort_num = argc;
	comp_num = 0;
	monitor_a = ft_makemonitor(list_a);
	monitor_b = ft_makemonitor(list_b);
	
	while (comp_num <= argc)
	{
		divide_to_b(list_a, list_b, sort_num, comp_num);
		b_num += push_halfgreatervalues(list_a, list_b, comp_num);
		sort_in_b(list_a, list_b, b_num, comp_num);
		sortednum_to_abot(list_a, list_b, b_num, comp_num);
	}
	free(monitor_a);
	free(monitor_b);
	return (list_a);
}
