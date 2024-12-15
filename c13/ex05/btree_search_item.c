/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:42:51 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/03 15:43:30 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    void *result;

    if (root == 0)
        return (0);
    result = btree_search_item(root->left, data_ref, cmpf);
    if (result != 0)
        return (result);
    if (cmpf(root->item, data_ref) == 0)
        return (root->item);
    result = btree_search_item(root->right, data_ref, cmpf);
    if (result != 0)
        return (result);
    return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// t_btree *btree_create_node(void *item)
// {
//     t_btree *new_node;

//     new_node = (t_btree *)malloc(sizeof(t_btree));
//     if (new_node)
//     {
//         new_node->item = item;
//         new_node->left = NULL;
//         new_node->right = NULL;
//     }
//     return (new_node);
// }

// void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
// {
//     if (*root == NULL)
//         *root = btree_create_node(item);
//     else if (cmpf(item, (*root)->item) < 0)
//         btree_insert_data(&(*root)->left, item, cmpf);
//     else
//         btree_insert_data(&(*root)->right, item, cmpf);
// }

// void btree_free(t_btree *root)
// {
//     if (root)
//     {
//         btree_free(root->left);
//         btree_free(root->right);
//         free(root);
//     }
// }

// int cmpf(void *a, void *b)
// {
//     return (strcmp((char *)a, (char *)b));
// }

// int main(void)
// {
//     t_btree *root;
//     char *data_ref = "search_item";
//     char *result;

//     // Assume btree_create_node and btree_insert_data are implemented
//     root = btree_create_node("root_item");
//     btree_insert_data(&root, "left_item", cmpf);
//     btree_insert_data(&root, "right_item", cmpf);
//     btree_insert_data(&root, "search_item", cmpf);

//     result = (char *)btree_search_item(root, data_ref, cmpf);
//     if (result)
//         printf("Item found: %s\n", result);
//     else
//         printf("Item not found\n");

//     // Assume btree_free is implemented to free the tree
//     btree_free(root);
//     return (0);
// }