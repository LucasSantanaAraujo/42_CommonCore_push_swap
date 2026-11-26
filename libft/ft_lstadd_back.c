/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:13:36 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:17:50 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}
/*
#include <stdio.h>
void print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_node;
	t_list	*aux;

	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");

	if (!node1 || !node2 || !node3)
		return (1);

	node1->next = node2;
	node2->next = node3;

	printf("\nBefore ft_lstadd_back :\n");
	print_list(node1);

	new_node = ft_lstnew("D");
	if (!new_node)
		return (1);

	ft_lstadd_back(&node1, new_node);

	printf("\nAfter ft_lstadd_back :\n");
	print_list(node1);

	while (node1 != NULL)
	{
		aux = node1->next;
		free(node1);
		node1 = aux;
	}
	return (0);
}
*/