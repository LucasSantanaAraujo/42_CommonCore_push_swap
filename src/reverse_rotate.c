/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:11:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:12:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	int	last;
	int	i;

	if (stack->size < 2)
		return ;
	last = stack->data[stack->size - 1];
	i = stack->size - 1;
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[0] = last;
}

void	rra(t_ps *ps)
{
	reverse_rotate(&ps->a);
	print_op(ps, RRA);
}

void	rrb(t_ps *ps)
{
	reverse_rotate(&ps->b);
	print_op(ps, RRB);
}

void	rrr(t_ps *ps)
{
	reverse_rotate(&ps->a);
	reverse_rotate(&ps->b);
	print_op(ps, RRR);
}
