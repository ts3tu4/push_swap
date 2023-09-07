/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven_or_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:44:35 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/03 18:53:16 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

// 半分をｂに移してそのあと半分以上と以下にソート
//1kaime mudana rb ari
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
			if ((*list_b)->index <= quarter_num)
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

int	push_halfgreatervalues(t_node **list_a, t_node **list_b, int b_num)
{

}

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

int	sortednum_to_abot(t_node **list_a, t_node **list_b, int b_num)
{
	size_t	i;
	size_t	j;
	int		comp_num;

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
//未完成 B-Numの中が3個かソートされてたらソートしてAの下に置く

//しょりが終わったものの個数を持っておく関数必要じゃない？
t_node	**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc)
{
	int	num;
	int	half_num;
	int	comp_num;

	num = argc;
	half_num = num / 2;
	comp_num = 0;
	divide_to_b(list_a, list_b, num);
	sort_in_b(list_a, list_b, half_num, comp_num);
	return (list_a);
}
