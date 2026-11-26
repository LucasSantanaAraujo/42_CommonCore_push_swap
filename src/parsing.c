/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta, joacarva <marvin@42.fr>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:03:53 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/25 15:04:09 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	parse_int(const char *str, int *output)
{
	int		sign;
	long	result;
	int		i;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		if (result * sign > INT_MAX)
			return (0);
		if (result * sign < INT_MIN)
			return (0);
		i++;
	}
	*output = (int)(result * sign);
	return (1);
}

int	args_length(int argc, char **argv, int start)
{
	int	total;
	int	i;

	i = start;
	total = 0;
	while (i < argc)
	{
		total += ft_strlen(argv[i]);
		if (i < argc - 1)
			total++;
		i++;
	}
	return (total + 1);
}

static int	copy_arg(char *dst, const char *src, int k)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dst[k] = src[j];
		j++;
		k++;
	}
	return (k);
}

char	*join_args(int argc, char **argv, int start)
{
	char	*result;
	int		i;
	int		k;

	result = malloc(args_length(argc, argv, start));
	if (result == NULL)
		return (NULL);
	i = start;
	k = 0;
	while (i < argc)
	{
		k = copy_arg(result, argv[i], k);
		if (i < argc - 1)
		{
			result[k] = ' ';
			k++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
