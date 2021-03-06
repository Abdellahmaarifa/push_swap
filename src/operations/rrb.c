/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarifa <amaarifa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:26:02 by amaarifa          #+#    #+#             */
/*   Updated: 2022/02/04 20:28:14 by amaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrb(t_stack *b, int print)
{
	if (rotate_stack_reverse(b) && print)
		ft_putstr("rrb\n");
	return (1);
}
