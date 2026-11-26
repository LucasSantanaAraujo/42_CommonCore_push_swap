/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanta <lucsanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:02:45 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/26 16:40:42 by lucsanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int	*data;
	int	size;
	int	capacity;
}	t_stack;

int		is_valid_number(const char *str);
int		parse_int(const char *str, int *output);
int		args_length(int argc, char **argv, int start);
char	*join_args(int argc, char **argv, int start);
int		stack_init(t_stack *stack, int capacity);
void	stack_free(t_stack *stack);
int		has_duplicates(t_stack *stack);
int		fill_stack(t_stack *stack, char **numbers);
int		count_numbers(char **numbers);
void	free_numbers(char **numbers);

#endif
