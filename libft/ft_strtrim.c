/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:58:46 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:04:39 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	return (ft_substr(s1, i, (j - i) + 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*p;

	p = ft_strtrim("   hello   ", " ");
	printf("spaces:    \"%s\"  (expected \"hello\")\n", p);
	free(p);
	p = ft_strtrim("xxhexxloxx", "x");
	printf("middle:    \"%s\"  (expected \"hexxlo\")\n", p);
	free(p);
	p = ft_strtrim("xxxx", "x");
	printf("all gone:  \"%s\"  (expected \"\")\n", p);
	free(p);
	p = ft_strtrim("hello", "xyz");
	printf("nothing:   \"%s\"  (expected \"hello\")\n", p);
	free(p);
	return (0);
}
*/