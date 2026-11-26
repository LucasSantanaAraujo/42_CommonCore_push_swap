/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:02:24 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/18 19:12:25 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	pf_strlen(const char *s);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putptr(void *ptr);
int	ft_putnbr(unsigned long num, char *base);
int	ft_putnbr_signed(int n);
int	ft_format(char c, va_list args);
int	ft_printf(const char *format, ...);

#endif