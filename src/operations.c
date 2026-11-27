/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocardoso <joaocardoso@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 01:06:50 by joaocardoso       #+#    #+#             */
/*   Updated: 2026/11/27 01:10:55 by joaocardoso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a)
{
    int tmp;

    if (a->size < 2)
        return;
    tmp = a->data[0];
    a->data[0] = a->data[1];
    a->data[0] = tmp;
    write(1, "sa\n", 3);
}

void ra(t_stack *a)
{
    
}

void rra(t_stack *a){}
void pb(t_stack *a, t_stack *b){}
void pa(t_stack *a, t_stack *b){}


