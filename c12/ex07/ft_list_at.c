/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:31 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 15:01:24 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    while(nbr-- && begin_list)
        begin_list = begin_list->next;
    return (begin_list);
}

// MAIN TO TESTING
// #include <stdio.h>
// #include <stdlib.h>
// t_list *ft_create_elem(void *data)
// {
//     t_list *new_elem = (t_list *)malloc(sizeof(t_list));
//     if (new_elem)
//     {
//         new_elem->data = data;
//         new_elem->next = NULL;
//     }
//     return new_elem;
// }
///
// int main(void)
// {
//     t_list *list = ft_create_elem("First");
//     list->next = ft_create_elem("Second");
//     list->next->next = ft_create_elem("Third");

//     t_list *elem = ft_list_at(list, 1);
//     if (elem)
//         printf("Element at index 1: %s\n", (char *)elem->data);
//     else
//         printf("Element not found\n");

//
//     t_list *tmp;
//     while (list)
//     {
//         tmp = list;
//         list = list->next;
//         free(tmp);
//     }

//     return 0;
// }