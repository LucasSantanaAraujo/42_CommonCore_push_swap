/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:16:43 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:55:11 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s_len;

	s_len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(s_len + 1);
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, s1, s_len + 1);
	ft_strlcat(s, s2, s_len + 1);
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*p;

	p = ft_strjoin("hello", " world");
	printf("both:      \"%s\"  (expected \"hello world\")\n", p);
	free(p);
	p = ft_strjoin("", "world");
	printf("s1 empty:  \"%s\"  (expected \"world\")\n", p);
	free(p);
	p = ft_strjoin("hello", "");
	printf("s2 empty:  \"%s\"  (expected \"hello\")\n", p);
	free(p);
	p = ft_strjoin("", "");
	printf("both empty: \"%s\"  (expected \"\")\n", p);
	free(p);
	return (0);
}
*/