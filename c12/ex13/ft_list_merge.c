/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:49:04 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/03 12:35:32 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *tmp;

    tmp = *begin_list1;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = begin_list2;
}

/* TEST
#include <stdio.h>
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
    t_list *list1 = create_elem("1");
    list1->next = create_elem("2");
    list1->next->next = create_elem("3");

    t_list *list2 = create_elem("4");
    list2->next = create_elem("5");
    list2->next->next = create_elem("6");

    printf("List 1 before merge: ");
    print_list(list1);
    printf("List 2 before merge: ");
    print_list(list2);

    ft_list_merge(&list1, list2);

    printf("List 1 after merge: ");
    print_list(list1);

    return 0;
}*/