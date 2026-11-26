/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:17:01 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:53:33 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*p;

	p = ft_substr("hello world", 6, 5);
	printf("(6, 5):    \"%s\"  (expected \"world\")\n", p);
	free(p);
	p = ft_substr("hello", 3, 100);
	printf("(3, 100):  \"%s\"  (expected \"lo\")\n", p);
	free(p);
	p = ft_substr("hello", 10, 5);
	printf("(10, 5):   \"%s\"  (expected \"\")\n", p);
	free(p);
	p = ft_substr("hello", 0, 0);
	printf("(0, 0):    \"%s\"  (expected \"\")\n", p);
	free(p);
	return (0);
}
*/