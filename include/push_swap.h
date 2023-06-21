/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:11:23 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/18 18:03:37 by mnanke           ###   ########.fr       */
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
	size_t			num;
	struct s_node	*next;
}	t_node;

// check input
long int	is_over_intmax(char *argv);
int			*check_input_return_cc(int argc, char **argv);
char		**allocate_for_args(int argc, char **argv);
char		**split_all_args(int argc, char **argv);
int			check_duplicate(char **splited_argv);
int			*coordinate_compress(char **splited_argv, size_t	len);
void		bubble_sort(char **splited_argv, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
char		**duplicate_array(char **orig_array, size_t len);
void		swap_str(char	**str1, char **str2);
void		ft_is_sorted(int *cc, int size);
// error/free
void		put_error(int a);
void		ft_int_free(int *a);
void		all_free(char **c);
void		free_list(t_node **list);
void		step_by_step_free(char **c, size_t i);
// make list
t_node		*newlist(int noerror_argv, int cc);
t_node		**ft_makelist(void);
t_node		**input_list(char **argv, t_node **list_a, int *cc);
long int	push_swap_atoi(char *argv);
t_node		*ft_lstlast(t_node *lst);
void		ft_lstadd_back(t_node **lst, t_node *new);
int			*change_int_ptr(char ***splited_argv, int argc);
//sort
t_node		**ft_sort(t_node **list_a, int argc);
t_node		**ft_three_or_less(t_node **list_a, int argc);
t_node		**ft_five_or_less(t_node **list_a, t_node **list_b, int argc);
t_node		**ft_two_sort(t_node **list_a);
t_node		**ft_three_sort(t_node **list_a);
//operations
void		ft_print_sa(t_node **list_a);
void		ft_swap(t_node **list_a);
// test
void		print_list_a(t_node **list_a);
#endif