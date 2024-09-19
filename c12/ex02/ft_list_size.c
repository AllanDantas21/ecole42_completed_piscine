/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:59:58 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/19 16:57:53 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
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
	printf("%d\n", ft_list_size(list));
	return (0);
}*/