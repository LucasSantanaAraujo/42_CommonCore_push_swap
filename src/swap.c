/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:13:24 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:15:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = tmp;
}

void	sa(t_ps *ps)
{
	swap(&ps->a);
	print_op(ps, SA);
}

void	sb(t_ps *ps)
{
	swap(&ps->b);
	print_op(ps, SB);
}

void	ss(t_ps *ps)
{
	swap(&ps->a);
	swap(&ps->b);
	print_op(ps, SS);
}
