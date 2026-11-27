/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 21:11:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 21:12:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	bit_count(int n)
{
	int	bits;

	bits = 0;
	while ((n - 1) >> bits)
		bits++;
	return (bits);
}

void	sort_complex(t_ps *ps)
{
	int	bits;
	int	size;
	int	i;
	int	j;

	size = ps->a.size;
	bits = bit_count(size);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			if (((ps->a.data[0] >> i) & 1) == 1)
				ra(ps);
			else
				pb(ps);
			j++;
		}
		while (ps->b.size > 0)
			pa(ps);
		i++;
	}
}
