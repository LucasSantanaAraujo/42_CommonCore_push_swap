/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:27:43 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:55:25 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_isalnum(0) : %d\n", ft_isalnum('0'));
	printf("isalnum(0) : %d\n", isalnum('0'));
	printf("ft_isalnum(9) : %d\n", ft_isalnum('9'));
	printf("isalnum(9) : %d\n", isalnum('9'));
	printf("ft_isalnum(A) : %d\n", ft_isalnum('A'));
	printf("isalnum(A) : %d\n", isalnum('A'));
	printf("ft_isalnum(z) : %d\n", ft_isalnum('z'));
	printf("isalnum(z) : %d\n", isalnum('z'));

	printf("ft_isalnum(@) : %d\n", ft_isalnum('@'));
	printf("isalnum(@) : %d\n", isalnum('@'));
	printf("ft_isalnum(+) : %d\n", ft_isalnum('+'));
	printf("isalnum(+) : %d\n", isalnum('+'));
	return (0);
}
*/