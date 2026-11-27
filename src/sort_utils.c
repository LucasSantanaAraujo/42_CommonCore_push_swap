/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:01:53 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 17:02:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index(t_stack *stack)
{
	int	i;
	int	best;

	best = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] < stack->data[best])
			best = i;
		i++;
	}
	return (best);
}

int	max_index(t_stack *stack)
{
	int	i;
	int	best;

	best = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] > stack->data[best])
			best = i;
		i++;
	}
	return (best);
}

void	bring_to_top_a(t_ps *ps, int index)
{
	int	n;

	n = index;
	if (index <= ps->a.size / 2)
	{
		while (n-- > 0)
			ra(ps);
	}
	else
	{
		n = ps->a.size - index;
		while (n-- > 0)
			rra(ps);
	}
}

void	bring_to_top_b(t_ps *ps, int index)
{
	int	n;

	n = index;
	if (index <= ps->b.size / 2)
	{
		while (n-- > 0)
			rb(ps);
	}
	else
	{
		n = ps->b.size - index;
		while (n-- > 0)
			rrb(ps);
	}
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->data[i] > stack->data[i + 1])
			return (0);
		i++;
	}
	return (1);
}
