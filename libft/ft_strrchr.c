/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:03:16 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:34:56 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	char			*last;

	target = (unsigned char)c;
	last = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == target)
			last = (char *)s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (last);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s;

	s = "hello world";
	printf("'h': %s\n", ft_strrchr(s, 'h'));
	printf("'o': %s\n", ft_strrchr(s, 'o'));
	printf("'d': %s\n", ft_strrchr(s, 'd'));
	printf("'z': %s\n", ft_strrchr(s, 'z'));
	printf("nul: [%s]\n", ft_strrchr(s, 0));
	return (0);
}
*/