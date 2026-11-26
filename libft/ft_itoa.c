/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:13:22 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:07:20 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = count_digits(num);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*p;

	p = ft_itoa(42);
	printf("42:           \"%s\"\n", p);
	free(p);
	p = ft_itoa(-42);
	printf("-42:          \"%s\"\n", p);
	free(p);
	p = ft_itoa(0);
	printf("0:            \"%s\"\n", p);
	free(p);
	p = ft_itoa(2147483647);
	printf("INT_MAX:      \"%s\"\n", p);
	free(p);
	p = ft_itoa(-2147483648);
	printf("INT_MIN:      \"%s\"\n", p);
	free(p);
	return (0);
}
*/