/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:03:10 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 15:58:48 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

static int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	left = 0;
	if (!root)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

static void	call(t_btree *root, int curr_level, int *levels,
		void (*applyf)(void *item, int curr_level, int is_first_elem))
{
	int	is_first_elem;

	is_first_elem = 1;
	if (levels[curr_level] == 1)
		is_first_elem = 0;
	else
		levels[curr_level] = 1;
	applyf(root->item, curr_level, is_first_elem);
	if (root->left)
		call(root->left, curr_level + 1, levels, applyf);
	if (root->right)
		call(root->right, curr_level + 1, levels, applyf);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	i;
	int	count;
	int	*levels;

	if (root)
	{
		count = btree_level_count(root);
		levels = malloc(sizeof(int) * count);
		if (!levels)
			return ;
		i = 0;
		while (i < count)
			levels[i++] = 0;
		call(root, 0, levels, applyf);
		free(levels);
	}
}

/*
Test
#include <stdio.h>
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if (node)
	{
		node->item = item;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}

void applyf(void *item, int current_level, int first)
{
printf("Lvl %d: %s (f: %d)\n", current_level, (char *)item, first);
}

int main(void)
{
	t_btree *root;

	root = btree_create_node("root");
	root->left = btree_create_node("left");
	root->right = btree_create_node("right");
	root->left->left = btree_create_node("left->left");
	root->left->right = btree_create_node("left->right");
	root->right->left = btree_create_node("right->left");
	root->right->right = btree_create_node("right->right");

	btree_apply_by_level(root, applyf);

	free(root->left->left);
	free(root->left->right);
	free(root->right->left);
	free(root->right->right);
	free(root->left);
	free(root->right);
	free(root);

	return 0;
}*/
