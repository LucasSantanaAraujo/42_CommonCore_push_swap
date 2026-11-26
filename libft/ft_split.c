/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:16:32 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/16 16:06:10 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static void	*free_all(char **array, size_t filled)
{
	size_t	i;

	i = 0;
	while (i < filled)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	*get_word(char const *s, size_t *i, char c)
{
	size_t	start;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	if (*i == start)
		return (NULL);
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	i;
	size_t	n;

	words = count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (n < words)
	{
		array[n] = get_word(s, &i, c);
		if (array[n] == NULL)
			return (free_all(array, n));
		n++;
	}
	array[n] = NULL;
	return (array);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	**arr;
	int		i;

	arr = ft_split("  hello   world  ", ' ');
	i = 0;
	while (arr[i] != NULL)
	{
		printf("[%d] \"%s\"\n", i, arr[i]);
		free(arr[i]);
		i++;
	}
	printf("count: %d  (expected 2)\n", i);
	free(arr);
	arr = ft_split("aaa", 'a');
	printf("all separators, first is NULL: %d  (expected 1)\n", arr[0] == NULL);
	free(arr);
	return (0);
}
*/