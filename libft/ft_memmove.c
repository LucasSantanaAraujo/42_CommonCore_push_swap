/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:43:04 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 12:43:08 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	buff[10];
	
	memcpy(buff, "abcdef", 7);
	ft_memmove(buff + 2, buff, 4);
	printf("dest after src :	%s (expected ababcd)\n", buff);
	memcpy(buff, "abcdef", 7);
	ft_memmove(buff, buff + 2, 4);
	printf("dest before src :	%s (expected cdefef)\n", buff);

	memset(buff, 'X', 9);
	buff[9] = '\0';
	ft_memmove(buff, "123", 3);
	printf("no overlap :	%s  (expected 123XXXXXX)\n", buff);
	printf("returns dest :	%d\n", ft_memmove(buff, "ab", 2) == buff);
	return (0);
}
*/