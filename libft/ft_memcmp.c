/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:26:29 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:33:42 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && p1[i] == p2[i])
		i++;
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned char	a[5];
	unsigned char	b[5];

	printf("equal:        %d  (expected 0)\n", 
		ft_memcmp("abcde", "abcde", 5));
	printf("first less:   %d  (expected negative)\n", 
		ft_memcmp("abcde", "abcdf", 5));
	printf("first more:   %d  (expected positive)\n", 
		ft_memcmp("abcdf", "abcde", 5));
	printf("diff past n:  %d  (expected 0)\n", ft_memcmp("abcde", "abcdX", 4));
	printf("n = 0:        %d  (expected 0)\n", ft_memcmp("abc", "xyz", 0));
	memcpy(a, "a\0bc", 5);
	memcpy(b, "a\0bz", 5);
	printf("past zero:    %d  (expected negative)\n", ft_memcmp(a, b, 5));
	return (0);
}
*/