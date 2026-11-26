/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 17:00:07 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/18 17:41:07 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	return (count + ft_putnbr((unsigned long)ptr, "0123456789abcdef"));
}
