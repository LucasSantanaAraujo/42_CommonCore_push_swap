/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:15:09 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:20:21 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*aux;
	unsigned int	count;

	aux = lst;
	count = 0;
	while (aux != NULL)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");

	node1->next = node2;
	node2->next = node3;

	printf("List size = %u\n", ft_lstsize(node1));

	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/