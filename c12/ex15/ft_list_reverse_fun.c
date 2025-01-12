/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:13:48 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 13:01:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*curr;
	t_list	*next;
	void	*temp;

	if (!begin_list || !begin_list->next)
		return ;
	curr = begin_list;
	while (curr)
	{
		next = curr->next;
		while (next)
		{
			temp = curr->data;
			curr->data = next->data;
			next->data = temp;
			next = next->next;
		}
		curr = curr->next;
	}
}

/*
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
		printf("%s ", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

int main()
{
	t_list *list = create_elem("one");
	list->next = create_elem("two");
	list->next->next = create_elem("three");
	list->next->next->next = create_elem("four");

	printf("Original list:\n");
	print_list(list);

	ft_list_reverse_fun(list);

	printf("Reversed list:\n");
	print_list(list);

	return 0;
} */