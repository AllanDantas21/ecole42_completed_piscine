/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:07:58 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 15:13:13 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
    while(begin_list)
    {
        if (!cmp(begin_list->data, data_ref))
            (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

// ******* TEST MAIN *******
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

t_list *create_elem(void *data)
{
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (new_elem)
    {
        new_elem->data = data;
        new_elem->next = NULL;
    }
    return new_elem;
}

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int cmp_data(void *data1, void *data2)
{
    return strcmp((char *)data1, (char *)data2);
}

int main()
{
    t_list *list = create_elem("Hello");
    list->next = create_elem("World");
    list->next->next = create_elem("42");
    list->next->next->next = create_elem("Piscine");

    char *data_ref = "World";
    ft_list_foreach_if(list, print_data, data_ref, cmp_data);

    t_list *tmp;
    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }
    return (0);
}