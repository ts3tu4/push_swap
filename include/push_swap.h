/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:11:23 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/10 19:51:58 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_node{
	struct s_node	*prev;
	int				index;
	int				block;
	struct s_node	*next;
}	t_node;

typedef struct s_monitor{
	t_node	*top;
	t_node	*bottom;
	int		count;
}	t_monitor;

// check input
long int	is_over_intmax(char *argv);
int			*check_input_return_cc(int *argc, char **argv);
char		**allocate_for_args(int *argc, char **argv);
char		**split_all_args(int *argc, char **argv);
int			check_duplicate(int *c2i, int len);
int			*coordinate_compress(int *c2i, int len);
int			splited_len(char **splited_argv);
int			*bubble_sort(int *sorted_intager, int len);
void		swap_int(int *n, int *m);
void		ft_is_sorted(int *cc, int size);
// error/free
void		put_error(int a);
void		ft_int_free(int *a);
void		all_free(char **c);
void		free_list(t_node **list);
void		step_by_step_free(char **c, size_t i);
// make list
t_node		*newlist(int cc);
t_node		**ft_makelist(void);
t_node		**input_list(t_node **list_a, int *cc, int argc);
t_node		*ft_lstlast(t_node *lst);
void		ft_lstadd_back(t_node **lst, t_node *new);
t_monitor	*ft_makemonitor(t_node **list_a);
int			ft_lstsize(t_node *list);
//sort
t_node		**ft_sort(t_node **list_a, t_node **list_b, int argc);
t_node		**ft_three_or_less(t_node **list_a, int argc);
t_node		**ft_three_sort(t_node **list_a);
t_node		**ft_six_or_less(t_node **list_a, t_node **list_b, int argc);
t_node		**ft_seven_or_more(t_node **list_a, t_node **list_b, int argc);
void		split6(t_node **list_a, int argc);
void		send_mid_to_b(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
void		sort_to_a(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
//sort_util
int			is_index_not_sorted(t_node **list_a);
t_node		return_from_b(t_node **list_a, t_node **list_b);
void		move_min_to_b(t_node **list_a, t_node **list_b);
int			get_min_index(t_node **list_a, int comp_num);
int			get_max_index(t_node **list_a);
int			get_mid_index(t_node **list_a, int comp_num);
int			get_quater_index(t_node **list_a, int comp_num);
int			split6_search(t_node *tmp, int mid_num, int halfblock_num);
void		sort_to_a(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
t_monitor	*ft_monitoringlist(t_node **list_a, t_monitor *monitor_a);
int			is_num_in_block(t_node **list_a, int i);
void		fill_lower_half(t_node **list_b, t_monitor *monitor_b, int i);
void		fill_upper_half(t_node **list_b, int i);
int			find_b_max_in_top(t_node **list_b);
void		send_back_to_a(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
//operations
void		ft_swap(t_node **list_a);
void		ft_rotate(t_node **list_a);
void		ft_reverse_rotate(t_node **list_a);
void		ft_push(t_node **list_a, t_node **list_b);
void		ft_print_ra(t_node **list_a);
void		ft_print_rb(t_node **list_b);
void		ft_print_sa(t_node **list_a);
void		ft_print_sb(t_node **list_b);
void		ft_print_rra(t_node **list_a);
void		ft_print_rrb(t_node **list_b);
void		ft_print_pb(t_node **list_a, t_node **list_b);
void		ft_print_pa(t_node **list_a, t_node **list_b);
void		ft_print_pa_extra(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
void		ft_print_pb_extra(t_node **list_a, t_node **list_b,
				t_monitor *monitor_a, t_monitor *monitor_b);
void		ft_print_rra_extra(t_node **list_a, t_monitor *monitor_a);
void		ft_print_rrb_extra(t_node **list_b, t_monitor *monitor_b);
void		ft_print_ra_extra(t_node **list_a, t_monitor *monitor_a);
void		ft_print_rb_extra(t_node **list_b, t_monitor *monitor_b);
void		ft_print_sa_extra(t_node **list_a, t_monitor *monitor_a);
void		ft_print_sb_extra(t_node **list_b, t_monitor *monitor_b);
// test
void		print_list_a(t_node **list_a);
void		print_monitoringlist(t_monitor *monitor_a);
#endif