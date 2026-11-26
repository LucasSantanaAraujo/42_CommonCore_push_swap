/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:14:01 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:02:17 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
void del(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = ft_lstnew(ft_strdup("A"));
    node2 = ft_lstnew(ft_strdup("B"));
    node3 = ft_lstnew(ft_strdup("C"));

    node1->next = node2;
    node2->next = node3;

    printf("\nBefore ft_lstclear:\n");
    print_list(node1);

    ft_lstclear(&node1, del);

    printf("\nAfter ft_lstclear:\n");

    if (node1 == NULL)
        printf("NULL\n");
    else
        print_list(node1);

    return (0);
}
*/