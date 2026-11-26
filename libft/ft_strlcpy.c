/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:26:30 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 12:42:36 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[10];
	size_t	ret;

	memset(dst, 'X', 9);
	dst[9] = '\0';
	ret = ft_strlcpy(dst, "hello", 10);
	printf("size 10:  dst=\"%s\"  ret=%zu  (expected \"hello\" 5)\n", dst, ret);

	memset(dst, 'X', 9);
	dst[9] = '\0';
	ret = ft_strlcpy(dst, "hello", 3);
	printf("size 3:   dst=\"%s\"  ret=%zu  (expected \"he\" 5)\n", dst, ret);

	memset(dst, 'X', 9);
	dst[9] = '\0';
	ret = ft_strlcpy(dst, "hello", 0);
	printf("size 0:   dst=\"%s\"  ret=%zu  (expected XXXXXXXXX 5)\n", dst, ret);
	return (0);
}
*/