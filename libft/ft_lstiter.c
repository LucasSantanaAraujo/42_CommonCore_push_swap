/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:14:25 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 15:18:50 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
void	print_upper(void *content)
{
	char	*str;
	int		i;

	str =(char *)content;
	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("a");
	node2 = ft_lstnew("b");
	node3 = ft_lstnew("c");

	if (!node1 || !node2 || !node3)
        return (1);

	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, print_upper);

	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/