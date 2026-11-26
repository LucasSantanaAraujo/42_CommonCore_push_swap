/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:16:49 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:08:56 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
static char	mark_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ('*');
	return (c);
}

int	main(void)
{
	char	*p;

	p = ft_strmapi("abcdef", mark_even);
	printf("result:  \"%s\"  (expected \"*b*d*f\")\n", p);
	free(p);
	p = ft_strmapi("", mark_even);
	printf("empty:   \"%s\"  (expected \"\")\n", p);
	free(p);
	return (0);
}
*/