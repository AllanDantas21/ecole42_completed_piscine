/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:22:05 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 13:03:31 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_sort(t_list **begin_list, int (*cmp)());
static void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, cmp);
}

static void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	void	*temp;

	if (!begin_list || !*begin_list)
		return ;
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

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!data)
		return ;
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = *begin_list;
		*begin_list = node;
	}
}

/*
TEST MAIN
#include <stdio.h>
#include <string.h>

int cmp(void *a, void *b)
{
	return strcmp((char *)a, (char *)b);
}

int main(void)
{
	t_list *list = NULL;

	ft_sorted_list_insert(&list, "banana", cmp);
	ft_sorted_list_insert(&list, "apple", cmp);
	ft_sorted_list_insert(&list, "cherry", cmp);

	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}

	// Free the list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return 0;
} */