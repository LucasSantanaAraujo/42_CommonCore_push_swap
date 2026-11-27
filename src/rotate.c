/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:15:34 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:16:13 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	int	first;
	int	i;

	if (stack->size < 2)
		return ;
	first = stack->data[0];
	i = 0;
	while (i < stack->size - 1)
	{
		stack->data[i] = stack->data[i + 1];
		i++;
	}
	stack->data[i] = first;
}

void	ra(t_ps *ps)
{
	rotate(&ps->a);
	print_op(ps, RA);
}

void	rb(t_ps *ps)
{
	rotate(&ps->b);
	print_op(ps, RB);
}

void	rr(t_ps *ps)
{
	rotate(&ps->a);
	rotate(&ps->b);
	print_op(ps, RR);
}
