/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:25 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 13:01:22 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*next;

	prev = NULL;
	while (begin_list && *begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = *begin_list;
		*begin_list = next;
	}
	*begin_list = prev;
}

/******* TEST MAIN ******* 
#include <stdio.h>
#include <stdlib.h>
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
	t_list *list;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	elem1 = ft_create_elem("First");
	elem2 = ft_create_elem("Second");
	elem3 = ft_create_elem("Third");

	elem1->next = elem2;
	elem2->next = elem3;
	list = elem1;

	printf("Original list:\n");
	print_list(list);

	ft_list_reverse(&list);

	printf("Reversed list:\n");
	print_list(list);

	return 0;
}*/