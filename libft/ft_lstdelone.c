/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:14:12 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:18:36 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;

    node1 = ft_lstnew(ft_strdup("A"));
    node2 = ft_lstnew(ft_strdup("B"));
    node3 = ft_lstnew(ft_strdup("C"));

    if (!node1 || !node2 || !node3)
        return (1);

    node1->next = node2;
    node2->next = node3;

    printf("\nBefore ft_lstdelone:\n");
    print_list(node1);

    ft_lstdelone(node2, del);

    node1->next = node3;

    printf("\nAfter ft_lstdelone:\n");
    print_list(node1);

    free(node1->content);
    free(node1);
    free(node3->content);
    free(node3);

    return (0);
}
*/