/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:01:38 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 13:13:39 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

/*  TEST
#include <stdio.h>
#include <stdlib.h>

void print_item(void *item)
{
	printf("%s\n", (char *)item);
}

t_btree *btree_create_node(void *item)
{
	t_btree *node = (t_btree *)malloc(sizeof(t_btree));
	if (node)
	{
		node->left = NULL;
		node->right = NULL;
		node->item = item;
	}
	return node;
}

int main(void)
{
	t_btree *root = btree_create_node("root");
	root->left = btree_create_node("left");
	root->right = btree_create_node("right");
	root->left->left = btree_create_node("left->left");
	root->left->right = btree_create_node("left->right");
	btree_apply_suffix(root, print_item);
	return 0;
}*/