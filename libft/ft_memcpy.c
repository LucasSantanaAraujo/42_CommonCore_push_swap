/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:22:42 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 12:43:16 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[10];

	memset(dst, 'X', 9);
	dst[9] = '\0';
	ft_memcpy(dst, "abcde", 5);
	printf("n = 5 :  %s\n", dst);
	memset(dst, 'X', 9);
	dst[9] = '\0';
	ft_memcpy(dst, "abcde", 0);
	printf("n = 0 :  %s\n", dst);
	printf("returns dest :  %d\n", ft_memcpy(dst, "abc", 3) == dst);
	return (0);
}
*/