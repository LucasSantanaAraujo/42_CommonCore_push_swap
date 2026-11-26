/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:29:49 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:10:42 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && little[j] != '\0' && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*big;

	big = "hello world";
	printf("world n=11:  %s\n", ft_strnstr(big, "world", 11));
	printf("world n=10:  %s\n", ft_strnstr(big, "world", 10));
	printf("hello n=11:  %s\n", ft_strnstr(big, "hello", 11));
	printf("empty n=11:  %s\n", ft_strnstr(big, "", 11));
	printf("zzz n=11:    %s\n", ft_strnstr(big, "zzz", 11));
	printf("hello n=0:   %s\n", ft_strnstr(big, "hello", 0));
	printf("partials:    %s\n", ft_strnstr("aaabc", "abc", 5));
	return (0);
}
*/