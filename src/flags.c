/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 13:11:54 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 13:12:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	match_flags(t_ps *ps, const char *arg)
{
	if (ft_strncmp(arg, "--simple", 9) == 0)
		ps->strategy = SIMPLE;
	else if (ft_strncmp(arg, "--medium", 9) == 0)
		ps->strategy = MEDIUM;
	else if (ft_strncmp(arg, "--complex", 10) == 0)
		ps->strategy = COMPLEX;
	else if (ft_strncmp(arg, "--adaptive", 11) == 0)
		ps->strategy = ADAPTIVE;
	else if (ft_strncmp(arg, "--bench", 8) == 0)
		ps->bench = 1;
	else
		return (0);
	return (1);
}

int	parse_flags(t_ps *ps, int argc, char **argv, int *start)
{
	int	i;

	i = 1;
	while (i < argc && argv[i][0] == '-' && argv[i][1] == '-')
	{
		if (!match_flags(ps, argv[i]))
			return (0);
		i++;
	}
	*start = i;
	return (1);
}
