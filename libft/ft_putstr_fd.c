/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:15:52 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:13:14 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <unistd.h>
int	main(void)
{
	ft_putstr_fd("hello world", 1);
	write(1, "\n", 1);
	ft_putstr_fd(NULL, 1);
	write(1, "(NULL did not crash)\n", 21);
	return (0);
}
*/