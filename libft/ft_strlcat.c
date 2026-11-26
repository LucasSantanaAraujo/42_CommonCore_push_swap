/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:43:48 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 13:01:00 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[20];
	size_t	ret;

	memcpy(dest, "hello", 6);
	ret = ft_strlcat(dest, "world", 20);
	printf("size 20:  dst=\"%s\"  ret=%zu 
		(expected \"helloworld\" 10)\n", dest, ret);

	memcpy(dest, "hello", 6);
	ret = ft_strlcat(dest, "world", 8);
	printf("size 8:   dst=\"%s\"  ret=%zu 
		(expected \"hellowo\" 10)\n", dest, ret);

	memcpy(dest, "hello", 6);
	ret = ft_strlcat(dest, "world", 3);
	printf("size 3:   dst=\"%s\"  ret=%zu (expected \"hello\" 8)\n", dest, ret);

	memcpy(dest, "hello", 6);
	ret = ft_strlcat(dest, "world", 0);
	printf("size 0:   dst=\"%s\"  ret=%zu (expected \"hello\" 5)\n", dest, ret);
	return (0);
}
	*/