/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:49:58 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/24 18:54:59 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void ft_list_merge(t_list **begin_list1, t_list *begin_list2);
static void ft_list_sort(t_list **begin_list, int (*cmp)());

void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    ft_list_merge(begin_list1, begin_list2);
    ft_list_sort(begin_list1, cmp);
}

static void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *tmp;

    tmp = *begin_list1;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = begin_list2;
}

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

// TEST 
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// t_list *ft_create_elem(void *data)
// {
//     t_list *new_elem;

//     new_elem = (t_list *)malloc(sizeof(t_list));
//     if (new_elem)
//     {
//         new_elem->data = data;
//         new_elem->next = NULL;
//     }
//     return new_elem;
// }

// int cmp(void *a, void *b)
// {
//     return strcmp((char *)a, (char *)b);
// }

// void print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s -> ", (char *)list->data);
//         list = list->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     t_list *list1 = ft_create_elem("apple");
//     list1->next = ft_create_elem("banana");
//     list1->next->next = ft_create_elem("cherry");

//     t_list *list2 = ft_create_elem("apricot");
//     list2->next = ft_create_elem("blueberry");
//     list2->next->next = ft_create_elem("citrus");

//     printf("List 1 before merge and sort:\n");
//     print_list(list1);

//     printf("List 2 before merge and sort:\n");
//     print_list(list2);

//     ft_sorted_list_merge(&list1, list2, cmp);

//     printf("List 1 after merge and sort:\n");
//     print_list(list1);

//     return 0;
// }