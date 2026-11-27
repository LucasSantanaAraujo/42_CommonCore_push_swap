/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_based.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocardoso <joaocardoso@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 15:31:36 by joaocardoso       #+#    #+#             */
/*   Updated: 2026/11/27 16:58:19 by joaocardoso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int find_min_chuck_index(t_stack *chunks, int *positions, int count)
{
    int i;
    int min_idx;

    min_idx = -1;
    i = 0;
    while(i < count)
    {
        if(positions[i] < chunks[i].size)
        {
            if(min_idx == -1 || chunks[i].data[positions[i]] < chunks[min_idx].data[positions[min_idx]])
                min_idx = i;
        }
        i++;
    }
    return (min_idx);
}

static t_stack merge_group(t_stack *chuncks, int count)
{
    t_stack result; 
    int position[5] = {0};
    int min_idx; 
    int i;

    min_idx = 0;
    i = 0;
    result.size = 0;
    result.capacity = 0;
    
    while (i < count)
    {
        result.capacity += chuncks[i].size;
        i++;
    }

    result.data = malloc(sizeof(int) * result.capacity);
    if (!result.data)
        return (result);

    while (result.size < result.capacity)
    {
        min_idx = find_min_chuck_index(chuncks, position, count);
        if (min_idx == -1)
            break;

        result.data[result.size] = chuncks[min_idx].data[position[min_idx]];
        position[min_idx]++;

        result.size++;
    } 
    return (result);
}

static t_stack multi_level_merge()
{
}