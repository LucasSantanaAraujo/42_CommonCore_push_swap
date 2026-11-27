/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 17:03:53 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 17:04:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_simple(t_ps *ps)
{
	while (ps->a.size > 3)
	{
		bring_to_top_a(ps, min_index(&ps->a));
		pb(ps);
	}
	sort_three(ps);
	while (ps->b.size > 0)
		pa(ps);
}
