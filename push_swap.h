/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:02:45 by lucsanta          #+#    #+#             */
/*   Updated: 2026/11/27 23:09:25 by marvin           ###   ########.fr       */
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

typedef enum e_op
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	COUNT
}	t_op;

typedef enum e_strat
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE	
}	t_strat;

typedef struct s_ps
{
	t_stack	a;
	t_stack	b;
	int		ops[COUNT];
	t_strat	strategy;
	int		bench;
}	t_ps;

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
void	print_op(t_ps *ps, t_op op);
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	ss(t_ps *ps);
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rr(t_ps *ps);
void	rra(t_ps *ps);
void	rrb(t_ps *ps);
void	rrr(t_ps *ps);
void	sort_two(t_ps *ps);
void	sort_three(t_ps *ps);
int		is_sorted(t_stack *stack);
int		normalize(t_stack *stack);
int		min_index(t_stack *stack);
int		max_index(t_stack *stack);
int		parse_flags(t_ps *ps, int argc, char **argv, int *start);
void	bring_to_top_a(t_ps *ps, int index);
void	bring_to_top_b(t_ps *ps, int index);
void	sort_simple(t_ps *ps);
void	sort_medium(t_ps *ps);
void	sort_complex(t_ps *ps);

#endif