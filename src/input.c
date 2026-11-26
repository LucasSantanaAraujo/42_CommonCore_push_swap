/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:17:24 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/26 15:18:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(char **numbers)
{
	int	count;

	count = 0;
	while (numbers[count] != NULL)
		count++;
	return (count);
}

void	free_numbers(char **numbers)
{
	int	i;

	if (numbers == NULL)
		return ;
	i = 0;
	while (numbers[i] != NULL)
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

static int	add_number(t_stack *stack, const char *number, int position)
{
	int	value;

	if (!is_valid_number(number))
		return (0);
	if (!parse_int(number, &value))
		return (0);
	stack->data[position] = value;
	stack->size++;
	return (1);
}

int	fill_stack(t_stack *stack, char **numbers)
{
	int	count;
	int	i;

	count = count_numbers(numbers);
	if (count == 0)
		return (0);
	if (!stack_init(stack, count))
		return (0);
	i = 0;
	while (i < count)
	{
		if (!add_number(stack, numbers[i], i))
		{
			stack_free(stack);
			return (0);
		}
		i++;
	}
	if (has_duplicates(stack))
	{
		stack_free(stack);
		return (0);
	}
	return (1);
}
