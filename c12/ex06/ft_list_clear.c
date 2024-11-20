/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:28:31 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 15:01:29 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*node;

	while (begin_list)
	{
		node = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = node;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_fct(void *data)
{
	free(data);
}

t_list	*ft_create_elem(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
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
	char *strs[] = {strdup("Hello"), strdup("World"), strdup("42")};
	t_list *list = ft_list_push_strs(3, strs);
	t_list *begin_list = list;
	while (list)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	ft_list_clear(begin_list, free_fct);
	return (0);
}*/