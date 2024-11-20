/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:14:24 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 15:17:55 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    if (!begin_list || !data_ref || !cmp)
        return (NULL);
    while (begin_list)
    {
        if(!cmp(begin_list->data, data_ref))
            return (begin_list);
        begin_list = begin_list->next;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int cmp(void *data, void *data_ref)
// {
//     return (strcmp((char *)data, (char *)data_ref));
// }

// int main()
// {
//     t_list node3 = { "node3", NULL };
//     t_list node2 = { "node2", &node3 };
//     t_list node1 = { "node1", &node2 };
//     t_list *found;

//     found = ft_list_find(&node1, "node3", cmp);
//     if (found)
//         printf("Found: %s\n", (char *)found->data);
//     else
//         printf("Not found\n");
//     return 0;
// }