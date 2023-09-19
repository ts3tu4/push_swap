/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:41:43 by mnanke            #+#    #+#             */
/*   Updated: 2023/09/19 17:09:48 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	put_error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	arg_check(char **tmp)
{
	if (!tmp || *tmp == '\0')
		put_error();
}
