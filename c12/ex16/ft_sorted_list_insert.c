/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:22:05 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/24 18:24:27 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *i;
    t_list *j;
    void *temp;

    if (!begin_list || !*begin_list)
        return;

    i = *begin_list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if ((*cmp)(i->data, j->data) > 0)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    
}