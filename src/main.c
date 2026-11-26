/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:03:26 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/26 17:03:05 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

static int	parse_input(t_stack *a, int argc, char **argv)
{
	char	*joined;
	char	**numbers;
	int		start;

	start = 1;
	if (ft_strncmp(argv[1], "--", 2) == 0)
		start = 2;
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

int	main(int argc, char **argv)
{
	t_stack	a;

	if (argc < 2)
		return (0);
	if (!parse_input(&a, argc, argv))
		return (error());
	stack_free(&a);
	return (0);
}
