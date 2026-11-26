/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:47:18 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 11:15:48 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	buff[10];

	memset(buff, 'X', 9);
	buff[9] = '\0';
	ft_memset(buff, 'A', 1);
	printf("n = 1: %s\n", buff);
	memset(buff, 'X', 9);
	buff[9] = '\0';
	ft_memset(buff, 'A', 5);
	printf("n = 5: %s\n", buff);
	memset(buff, 'X', 9);
	buff[9] = '\0';
	ft_memset(buff, 'A', 0);
	printf("n = 0: %s\n", buff);
	return (0);
}
*/