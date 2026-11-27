/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:03:53 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/25 15:04:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rank_of(t_stack *stack, int value)
{
	int	i;
	int	rank;

	rank = 0;
	i = 0;
	while (i < stack->size)
	{
		if (stack->data[i] < value)
			rank++;
		i++;
	}
	return (rank);
}

int	normalize(t_stack *stack)
{
	int	*ranks;
	int	i;

	ranks = malloc(sizeof(int) * stack->size);
	if (ranks == NULL)
		return (0);
	i = 0;
	while (i < stack->size)
	{
		ranks[i] = rank_of(stack, stack->data[i]);
		i++;
	}
	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = ranks[i];
		i++;
	}
	free(ranks);
	return (1);
}
