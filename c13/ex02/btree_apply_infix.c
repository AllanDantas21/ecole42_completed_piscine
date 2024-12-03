/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:47:02 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/03 13:00:40 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    if (!root)
        return ;
    btree_apply_infix(root->left, applyf);
    applyf(root->item);
    btree_apply_infix(root->right, applyf);
}

/*
#include <stdio.h>
#include <stdlib.h>
t_btree *btree_create_node(void *item)
{
    t_btree *node;

    node = (t_btree *)malloc(sizeof(t_btree));
    if (!node)
        return NULL;
    node->item = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void print_item(void *item)
{
    printf("%s\n", (char *)item);
}

int main(void)
{
    t_btree *root;

    root = btree_create_node("root");
    root->left = btree_create_node("left");
    root->right = btree_create_node("right");
    root->left->left = btree_create_node("left->left");
    root->left->right = btree_create_node("left->right");
    btree_apply_infix(root, print_item);
    return 0;
}*/