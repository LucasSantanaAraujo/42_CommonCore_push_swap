/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:14:47 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:17:28 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>
void *to_uppercase(void *content)
{
    char    *str;
    char    *new_str;
    int     i;

    str = (char *)content;
    new_str = ft_strdup(str);
    if (new_str == NULL)
        return (NULL);
    i = 0;
    while (new_str[i] != '\0')
    {
        new_str[i] = ft_toupper(new_str[i]);
        i++;
    }
    return (new_str);
}

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
    t_list  *node1;
    t_list  *node2;
    t_list  *node3;
    t_list  *new_list;

    node1 = ft_lstnew(ft_strdup("a"));
    node2 = ft_lstnew(ft_strdup("b"));
    node3 = ft_lstnew(ft_strdup("c"));

    node1->next = node2;
    node2->next = node3;

    printf("Original list before ft_lstmap:\n");
    print_list(node1);

    new_list = ft_lstmap(node1, to_uppercase, del);

    printf("\nNew list created with ft_lstmap:\n");
    print_list(new_list);

    printf("\nOriginal list after ft_lstmap:\n");
    print_list(node1);

    ft_lstclear(&node1, del);
    ft_lstclear(&new_list, del);

    return (0);
}
*/