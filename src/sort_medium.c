/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:11:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:12:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_chunks(t_ps *ps, int chunk)
{
	long	limit;
	int		rank;

	limit = chunk;
	while (ps->a.size > 0)
	{
		rank = ps->a.data[0];
		if (rank < limit)
		{
			pb(ps);
			if (rank < limit - chunk / 2 && ps->b.size > 1)
				rb(ps);
			if (ps->b.size == limit)
				limit += chunk;
		}
		else
			ra(ps);
	}
}

void	sort_medium(t_ps *ps)
{
	if (ps->a.size <= 100)
		push_chunks(ps, 20);
	else
		push_chunks(ps, 45);
	while (ps->b.size > 0)
	{
		bring_to_top_b(ps, max_index(&ps->b));
		pa(ps);
	}
}
