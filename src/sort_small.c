/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:11:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:12:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_ps *ps)
{
	if (ps->a.data[0] > ps->a.data[1])
		sa(ps);
}

void	sort_three(t_ps *ps)
{
	int	x;
	int	y;
	int	z;

	x = ps->a.data[0];
	y = ps->a.data[1];
	z = ps->a.data[2];
	if (x > y && y < z && x < z)
		sa(ps);
	else if (x > y && y > z)
	{
		sa(ps);
		rra(ps);
	}
	else if (x > y)
		ra(ps);
	else if (y > z && x < z)
	{
		sa(ps);
		ra(ps);
	}
	else if (y > z)
		rra(ps);
}
