/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:01:13 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:11:27 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src;
	char	*copy;

	src = "hello";
	copy = ft_strdup(src);
	printf("copy:       \"%s\"  (expected \"hello\")\n", copy);
	printf("length:     %zu  (expected 5)\n", ft_strlen(copy));
	free(copy);
	copy = ft_strdup("");
	printf("empty:      \"%s\"  len %zu  (expected \"\" 0)\n", 
		copy, ft_strlen(copy));
	free(copy);
	return (0);
}
*/