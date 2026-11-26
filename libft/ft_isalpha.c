/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:09:34 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:55:18 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_isalpha(a) : %d\n", ft_isalpha('a'));
	printf("isalpha(a) : %d\n", isalpha('a'));
	printf("ft_isalpha(A) : %d\n", ft_isalpha('A'));
	printf("isalpha(A) : %d\n", isalpha('A'));
	printf("ft_isalpha(z) : %d\n", ft_isalpha('z'));
	printf("isalpha(z) : %d\n", isalpha('z'));
	printf("ft_isalpha(Z) : %d\n", ft_isalpha('Z'));
	printf("isalpha(Z) : %d\n", isalpha('Z'));

	printf("ft_isalpha(42) : %d\n", ft_isalpha(42));
	printf("isalpha(42) : %d\n", isalpha(42));
	printf("ft_isalpha(0) : %d\n", ft_isalpha(0));
	printf("isalpha(0) : %d\n", ft_isalpha(0));
	printf("ft_isalpha(+) : %d\n", ft_isalpha('+'));
	printf("isalpha(+) : %d\n", isalpha('+'));
	return (0);
}
*/