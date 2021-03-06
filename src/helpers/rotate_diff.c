/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_diff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarifa <amaarifa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:53:44 by amaarifa          #+#    #+#             */
/*   Updated: 2022/02/06 20:23:37 by amaarifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	rotate_to_top(t_stack *a, t_stack *b, t_moves *best_moves)
{
	if (best_moves->to_a < 0)
		best_moves->to_a += a->size;
	if (best_moves->to_b < 0)
		best_moves->to_b += b->size;
	rotate_rr(a, b, best_moves);
}

static void	rotate_top_bottom(t_stack *a, t_stack *b, t_moves *best_moves)
{
	int	k;

	k = 0;
	while (k++ < absolute(best_moves->to_b))
	{
		if (best_moves->to_b > 0)
			rb(b, 1);
		else
			rrb(b, 1);
	}
	k = 0;
	while (k++ < absolute(best_moves->to_a))
	{
		if (best_moves->to_a > 0)
			ra(a, 1);
		else
			rra(a, 1);
	}
}

void	rotate_diff(t_stack *a, t_stack *b, t_moves *best_moves)
{
	int	k;
	int	a_mv;
	int	b_mv;
	int	size;

	if (best_moves->to_a < 0)
	{
		a_mv = best_moves->to_a;
		b_mv = best_moves->to_b;
		size = a->size;
	}
	else
	{
		a_mv = best_moves->to_b;
		b_mv = best_moves->to_a;
		size = b->size;
	}
	if (a_mv + size >= b_mv)
		k = a_mv + size;
	else
		k = b_mv;
	if (k < (absolute(a_mv) + absolute(b_mv)))
		rotate_to_top(a, b, best_moves);
	else
		rotate_top_bottom(a, b, best_moves);
}
