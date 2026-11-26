/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:19:20 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:02:37 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s;

	s = "hello world";
	printf("'h': %s\n", ft_strchr(s, 'h'));
	printf("'o': %s\n", ft_strchr(s, 'o'));
	printf("'d': %s\n", ft_strchr(s, 'd'));
	printf("'z': %s\n", ft_strchr(s, 'z'));
	printf("nul: [%s]\n", ft_strchr(s, 0));
	return (0);
}
*/