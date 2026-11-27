/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:03:26 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 23:10:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

static int	parse_input(t_stack *a, int argc, char **argv, int start)
{
	char	*joined;
	char	**numbers;

	if (start >= argc)
		return (0);
	joined = join_args(argc, argv, start);
	if (joined == NULL)
		return (0);
	numbers = ft_split(joined, ' ');
	free(joined);
	if (numbers == NULL)
		return (0);
	if (!fill_stack(a, numbers))
	{
		free_numbers(numbers);
		return (0);
	}
	free_numbers(numbers);
	return (1);
}

static void	run_sort(t_ps *ps)
{
	if (is_sorted(&ps->a))
		return ;
	if (ps->a.size == 2)
		sort_two(ps);
	else if (ps->a.size == 3)
		sort_three(ps);
	else if (ps->strategy == MEDIUM)
		sort_medium(ps);
	else if (ps->strategy == COMPLEX)
		sort_complex(ps);
	else
		sort_simple(ps);
}

int	main(int argc, char **argv)
{
	t_ps	ps;
	int		start;

	if (argc < 2)
		return (0);
	ft_bzero(&ps, sizeof(t_ps));
	ps.strategy = ADAPTIVE;
	if (!parse_flags(&ps, argc, argv, &start))
		return (error());
	if (!parse_input(&ps.a, argc, argv, start))
		return (error());
	if (!stack_init(&ps.b, ps.a.size) || !normalize(&ps.a))
	{
		stack_free(&ps.a);
		stack_free(&ps.b);
		return (error());
	}
	run_sort(&ps);
	stack_free(&ps.b);
	stack_free(&ps.a);
	return (0);
}
