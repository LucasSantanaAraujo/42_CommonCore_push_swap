/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:18:40 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:25:57 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		target;
	size_t				i;

	src = (const unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == target)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s;
	char	bytes[5];

	s = "hello world";
	printf("'o' n=11:   %s\n", (char *)ft_memchr(s, 'o', 11));
	printf("'d' n=11:   %s\n", (char *)ft_memchr(s, 'd', 11));
	printf("'d' n=5:    %s\n", (char *)ft_memchr(s, 'd', 5));
	printf("'z' n=11:   %s\n", (char *)ft_memchr(s, 'z', 11));
	printf("'h' n=0:    %s\n", (char *)ft_memchr(s, 'h', 0));
	
	memcpy(bytes, "a\0bc", 5);
	printf("past zero:  %s\n", (char *)ft_memchr(bytes, 'c', 5));
	return (0);
}
*/