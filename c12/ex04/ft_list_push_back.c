/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:05:22 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/20 14:35:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!data)
		return ;
	if (node)
	{
		if (!*begin_list)
			*begin_list = ft_create_elem(data);
		else
		{
			while (node->next)
				node = node->next;
			node->next = ft_create_elem(data);
		}
	}
}
