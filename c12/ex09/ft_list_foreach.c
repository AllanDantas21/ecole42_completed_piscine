/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:02:22 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 15:13:31 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

// ******* TEST MAIN *******
// #include <stdio.h>
// void print_data(void *data)
// {
//     printf("%s\n", (char *)data);
// }

// int main()
// {
//     t_list node3 = { "Node 3", NULL };
//     t_list node2 = { "Node 2", &node3 };
//     t_list node1 = { "Node 1", &node2 };

//     ft_list_foreach(&node1, print_data);
//     return (0);
// }