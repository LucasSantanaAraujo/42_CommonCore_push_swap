/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:27:50 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 10:54:56 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("ft_isprint(32) : %d\n", ft_isprint(32));
	printf("isprint(32) : %d\n", ft_isprint(32));
	printf("ft_isprint(126) : %d\n", ft_isprint(126));
	printf("isprint(126) : %d\n", ft_isprint(126));
	printf("ft_isprint(127) : %d\n", ft_isprint(127));
	printf("isprint(127) : %d\n", ft_isprint(127));
	return (0);
}
*/
