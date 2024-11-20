/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:18:45 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 14:35:43 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*t_list	*ft_create_elem(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}*/

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
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "World", "42"};
	t_list *list = ft_list_push_strs(3, strs);
	while (list)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}	
	return (0);
}*/
