/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:27:24 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:55:11 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_isascii(0) : %d\n", ft_isascii(0));
	printf("isascii(0) : %d\n", isascii(0));
	printf("ft_isascii(127) : %d\n", ft_isascii(127));
	printf("isascii(127) : %d\n", isascii(127));
	printf("ft_isascii(128) : %d\n", ft_isascii(128));
	printf("isascii(128) : %d\n", isascii(128));
	return (0);
}
*/