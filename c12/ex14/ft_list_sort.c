/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:05:31 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/22 19:04:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *tmp;

    tmp = *begin_list;
    while (tmp->next)
    {
        if ((*cmp)(tmp->data, tmp->next->data) > 0)
        {
            tmp = *begin_list;
            while (tmp->next)
            {
                if (cmp(tmp->data, tmp->next->data) > 0)
                {
                    void *temp;
                    temp = tmp->data;
                    tmp->data = tmp->next->data;
                    tmp->next->data = temp;
                    tmp = *begin_list;
                }
                else
                    tmp = tmp->next;
            }
        }
        else
            tmp = tmp->next;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    return strcmp(s1, s2);
}

t_list *ft_create_elem(void *data)
{
    t_list *new_elem;

    new_elem = (t_list *)malloc(sizeof(t_list));
    if (new_elem)
    {
        new_elem->data = data;
        new_elem->next = NULL;
    }
    return new_elem;
}

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *new_elem;
    t_list *tmp;

    new_elem = ft_create_elem(data);
    if (!*begin_list)
        *begin_list = new_elem;
    else
    {
        tmp = *begin_list;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new_elem;
    }
}

void print_list(t_list *list)
{
    while (list)
    {
        printf("%s\n", (char *)list->data);
        list = list->next;
    }
}

int main()
{
    t_list *list = NULL;

    ft_list_push_back(&list, "banana");
    ft_list_push_back(&list, "apple");
    ft_list_push_back(&list, "cherry");
    ft_list_push_back(&list, "date");

    printf("Before sorting:\n");
    print_list(list);

    ft_list_sort(&list, (int (*)())ft_strcmp);

    printf("After sorting:\n");
    print_list(list);

    return 0;
}