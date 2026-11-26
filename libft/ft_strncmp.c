/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:07:57 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:34:07 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("equal:        %d  (expected 0)\n", ft_strncmp("abcde", "abcde", 5));
	printf("first less:   %d  (expected negative)\n", 
		ft_strncmp("hello", "help", 5));
	printf("first more:   %d  (expected positive)\n", 
		ft_strncmp("help", "hello", 5));
	printf("diff past n:  %d  (expected 0)\n", 
		ft_strncmp("helloX", "helloY", 5));
	printf("n = 0:        %d  (expected 0)\n", ft_strncmp("abc", "xyz", 0));
	printf("n past end:   %d  (expected 0)\n", ft_strncmp("abc", "abc", 100));
	return (0);
}
*/