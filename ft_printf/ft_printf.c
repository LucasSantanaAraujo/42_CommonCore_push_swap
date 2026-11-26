/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 18:21:16 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/18 19:34:52 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		len;
	int		i;

	va_start(args, format);
	count = 0;
	len = 0;
	i = 0;
	while (format[i] != '\0' && len >= 0)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			len = ft_format(format[++i], args);
		else
			len = ft_putchar(format[i]);
		count += len;
		i++;
	}
	va_end(args);
	if (len < 0)
		return (-1);
	return (count);
}
