/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarifa <amaarifa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:26:27 by amaarifa          #+#    #+#             */
/*   Updated: 2022/02/04 20:28:22 by amaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrr(t_stack *a, t_stack *b, int print)
{
	int	i;
	int	j;

	i = rotate_stack_reverse(a);
	j = rotate_stack_reverse(b);
	if ((i || j) && print)
		ft_putstr("rrr\n");
	return (1);
}
