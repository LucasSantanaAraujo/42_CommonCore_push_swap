/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:15:47 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 14:02:53 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_tolower(A) :	%c\n", ft_tolower('A'));
	printf("tolower(A) :	%c\n", tolower('A'));
	printf("ft_tolower(Z) :	%c\n", ft_tolower('Z'));
	printf("tolower(Z) :	%c\n", tolower('Z'));
	printf("ft_tolower(a) :	%c\n", ft_tolower('a'));
	printf("tolower(a) :	%c\n", tolower('a'));
	printf("ft_tolower(z) :	%c\n", ft_tolower('z'));
	printf("tolower(z) :	%c\n", tolower('z'));
	printf("ft_tolower(@) :	%c\n", ft_tolower('@'));
	printf("tolower(@) :	%c\n", tolower('@'));
	return (0);
}
*/