/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:03:08 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 12:57:29 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (begin_list);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

/*
#include <stdio.h>
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list  *node;

	if (!data)
		return (NULL);
	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*new;
	int		i;

	i = 0;
	list = ft_create_elem(strs[i]);
	new = list;
	while (++i < size)
	{
		list->next = ft_create_elem(strs[i]);
		list = list->next;
	}
	return (new);
}

int main(void)
{
	char *strs[] = {"Hello", "World", "42", "rio"};
	t_list *list = ft_list_push_strs(4, strs);
	t_list *last = ft_list_last(list);
	printf("%s\n", (char *)last->data);
	return (0);
}*/