/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:50:50 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:01:00 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*p;

	total_size = nmemb * size;
	if (nmemb != 0 && (total_size / nmemb) != size)
		return (NULL);
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total_size);
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	char	*p;
	int		i;

	p = ft_calloc(5, sizeof(char));
	printf("not NULL:   %d  (expected 1)\n", p != NULL);
	printf("bytes:      ");
	i = 0;
	while (i < 5)
		printf("%d ", p[i++]);
	printf(" (expected 0 0 0 0 0)\n");
	free(p);
	p = ft_calloc(0, 10);
	printf("(0, 10):    %d  (expected 1, still a valid pointer)\n", p != NULL);
	free(p);
	p = ft_calloc((size_t)-1, 2);
	printf("overflow:   %d  (expected 1, returns NULL)\n", p == NULL);
	return (0);
}
*/