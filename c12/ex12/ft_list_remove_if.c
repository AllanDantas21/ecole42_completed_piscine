/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:18:20 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/03 12:35:19 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *prev;
    t_list *next;

    prev = NULL;
    while (*begin_list)
    {
        next = (*begin_list)->next;
        if (!cmp((*begin_list)->data, data_ref))
        {
            free_fct((*begin_list)->data);
            if (prev)
                prev->next = next;
            else
                *begin_list = next;
        }
        prev = *begin_list;
        begin_list = &(*begin_list)->next;
    }
}

/*
******* TEST MAIN *******
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(void *data, void *data_ref)
{
    return strcmp((char *)data, (char *)data_ref);
}

void free_fct(void *data)
{
    free(data);
}

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

void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *list = create_elem(strdup("one"));
    list->next = create_elem(strdup("two"));
    list->next->next = create_elem(strdup("three"));
    list->next->next->next = create_elem(strdup("two"));
    list->next->next->next->next = create_elem(strdup("four"));

    printf("Original list:\n");
    print_list(list);

    ft_list_remove_if(&list, "two", cmp, free_fct);

    printf("Modified list:\n");
    print_list(list);

    // Free remaining elements
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free_fct(temp->data);
        free(temp);
    }
    return 0;
}*/