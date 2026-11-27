/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocardoso <joaocardoso@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 16:59:52 by joaocardoso       #+#    #+#             */
/*   Updated: 2026/11/27 17:00:07 by joaocardoso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void insert_element(t_stack *a, int i)
{
	int	key;
	int	j;

	key = a->data[i];
	j = i - 1;
	while (j >= 0 && a->data[j] > key)
	{
		a->data[j + 1] = a->data[j];
		j--;
	}
	a->data[j + 1] = key;
}

static void insertion_sort(t_stack *a)
{
	int	i;

	i = 1;
	while (i < a->size)
	{
		insert_element(a, i);
		i++;
	}
}

static void sort_chunks(t_stack *chunks, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		insertion_sort(&chunks[i]);
		i++;
	}
}