/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:01:38 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 13:17:17 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_toupper(a) :	%c\n", ft_toupper('a'));
	printf("toupper(a) :	%c\n", toupper('a'));
	printf("ft_toupper(z) :	%c\n", ft_toupper('z'));
	printf("toupper(z) :	%c\n", toupper('z'));
	printf("ft_toupper(A) :	%c\n", ft_toupper('A'));
	printf("toupper(A) :	%c\n", toupper('A'));
	printf("ft_toupper(Z) :	%c\n", ft_toupper('Z'));
	printf("toupper(Z) :	%c\n", toupper('Z'));
	printf("ft_toupper(@) :	%c\n", ft_toupper('@'));
	printf("toupper(@) :	%c\n", toupper('@'));
	return (0);
}
*/