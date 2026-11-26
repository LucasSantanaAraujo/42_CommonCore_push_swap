/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:15:31 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 11:22:05 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>
static void	show(char *buf, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (buf[i] == 0)
			printf("0 ");
		else
			printf("%c ", buf[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	char	buff[10];

	memset(buff, '.', 10);
	ft_bzero(buff, 4);
	printf("n = 4:   ");
	show(buff, 10);
	memset(buff, '.', 10);
	ft_bzero(buff, 0);
	printf("n = 0:   ");
	show(buff, 10);
	memset(buff, '.', 10);
	ft_bzero(buff, 10);
	printf("n = 10:  ");
	show(buff, 10);
	return (0);
}
*/