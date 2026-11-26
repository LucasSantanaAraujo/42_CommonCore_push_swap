/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:42:39 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:55:31 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("ft_strlen('Hello') : %zu\n", ft_strlen("Hello"));
	printf("strlen('Hello') : %zu\n", strlen("Hello"));
	printf("ft_strlen(' ') : %zu\n", ft_strlen(" "));
	printf("strlen(' ') : %zu\n", strlen(" "));
	printf("ft_strlen('') : %zu\n", ft_strlen(""));
	printf("strlen('') : %zu\n", strlen(""));
	return (0);
}
*/