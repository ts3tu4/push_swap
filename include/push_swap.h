/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:11:23 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/04 19:35:54 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

// check input
long int	is_over_intmax(char *argv);
int			**check_input(int argc, char **argv);
// error
void		put_error(int a);
void		ft_free_error(int a);
// make list
t_node		*newlist(int noerror_argv);
t_node		**ft_makelist(t_node **list_a);
t_node		**input_list(char **argv, t_node **list_a);
long int	push_swap_atoi(char *argv);
#endif