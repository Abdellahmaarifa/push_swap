/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarifa <amaarifa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:06:08 by amaarifa          #+#    #+#             */
/*   Updated: 2022/02/05 13:12:39 by amaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *a)
{
	int	i;

	i = find_max(a);
	if (i == 0)
	{
		ra(a, 1);
		if (a->stack[0] > a->stack[1])
			sa(a, 1);
	}
	else if (i == 1 && a->stack[2] < a->stack[0])
		rra(a, 1);
	else if (i == 1)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (a->stack[0] > a->stack[1])
		sa(a, 1);
}
