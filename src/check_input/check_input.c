/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:38:14 by mnanke            #+#    #+#             */
/*   Updated: 2023/05/16 18:26:40 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../libft/libft.h"

int	check_input(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argv > INT_MAX)//atoi変換しなきゃ
		is_error(1);
	if (!ft_isdigit(*argv))
		is_error(1);
	
}