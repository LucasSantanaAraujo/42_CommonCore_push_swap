/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:17:43 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:55:03 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_isdigit(0) : %d\n", ft_isdigit('0'));
	printf("isdigit(0) : %d\n", isdigit('0'));
	printf("ft_isdigit(9) : %d\n", ft_isdigit('9'));
	printf("isdigit(9) : %d\n", isdigit('9'));

	printf("ft_isdigit(A) : %d\n", ft_isdigit('A'));
	printf("isdigit(A) : %d\n", isdigit('A'));
	return (0);
}
*/