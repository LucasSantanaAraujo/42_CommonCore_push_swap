/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:19:28 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/19 13:25:59 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long num, char *base)
{
	unsigned long	len;
	int				count;
	char			c;

	count = 0;
	len = pf_strlen(base);
	if (num >= len)
		count += ft_putnbr(num / len, base);
	c = base[num % len];
	return (count + write(1, &c, 1));
}
