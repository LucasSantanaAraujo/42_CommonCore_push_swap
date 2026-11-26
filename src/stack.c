/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 13:01:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/26 13:02:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_init(t_stack *stack, int capacity)
{
	stack->data = malloc(sizeof(int) * capacity);
	if (stack->data == NULL)
		return (0);
	stack->size = 0;
	stack->capacity = capacity;
	return (1);
}

void	stack_free(t_stack *stack)
{
	free(stack->data);
	stack->data = NULL;
	stack->size = 0;
	stack->capacity = 0;
}

int	has_duplicates(t_stack *stack)
{
	int	n;
	int	i;
	int	j;

	n = stack->size;
	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (stack->data[i] == stack->data[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
