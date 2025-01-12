/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:59:26 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 15:54:20 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	if (!root)
		return (0);
	left = tree_level_count(root->left);
	right = tree_level_count(root->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/*
#include <stdio.h>
#include <stdlib.h>
t_btree *btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->item = item;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
int main(void)
{
	t_btree *root;
	root = btree_create_node("42");
	root->left = btree_create_node("21");
	root->right = btree_create_node("84");
	root->left->left = btree_create_node("10");
	root->left->right = btree_create_node("30");
	printf("Tree Level Count: %d\n", tree_level_count(root));
	return (0);
}
*/