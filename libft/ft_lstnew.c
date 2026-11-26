/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:14:59 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:19:23 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*new_node1;
	t_list	*new_node2;

	new_node1 = ft_lstnew("Hello");
	new_node2 = ft_lstnew("World");
	printf("%s\n", (char *)new_node1->content);
	printf("%s\n", (char *)new_node2->content);
	free(new_node1);
	free(new_node2);
	return (0);
}
*/