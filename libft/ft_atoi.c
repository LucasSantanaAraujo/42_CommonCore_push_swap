/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:41:28 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:50:34 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("\"42\":           %d\n", ft_atoi("42"));
	printf("\"   42\":        %d\n", ft_atoi("   42"));
	printf("\"\\t\\n -42\":     %d\n", ft_atoi("\t\n -42"));
	printf("\"+42\":          %d\n", ft_atoi("+42"));
	printf("\"--42\":         %d\n", ft_atoi("--42"));
	printf("\"42abc\":        %d\n", ft_atoi("42abc"));
	printf("\"abc42\":        %d\n", ft_atoi("abc42"));
	printf("\"\":             %d\n", ft_atoi(""));
	printf("\"2147483647\":   %d\n", ft_atoi("2147483647"));
	printf("\"-2147483648\":  %d\n", ft_atoi("-2147483648"));
	return (0);
}
*/