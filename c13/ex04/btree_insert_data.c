/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:42:35 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/03 15:43:15 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_btree.h"
# include <stdlib.h>

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *)) {
    t_btree *new_node;

    if (root == NULL) 
        return;
    if (*root == NULL)
    {
        new_node = malloc(sizeof(t_btree));
        if (new_node == NULL)
            return;
        new_node->item = item;
        new_node->left = NULL;
        new_node->right = NULL;
        *root = new_node;
    }
    else 
    {
        if (cmpf(item, (*root)->item) < 0) 
            btree_insert_data(&(*root)->left, item, cmpf);
        else 
            btree_insert_data(&(*root)->right, item, cmpf);
    }
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int cmpf(void *a, void *b) {
//     return strcmp((char *)a, (char *)b);
// }

// void print_tree(t_btree *root) {
//     if (root == NULL)
//         return;
//     print_tree(root->left);
//     printf("%s\n", (char *)root->item);
//     print_tree(root->right);
// }

// int main() {
//     t_btree *root = NULL;

//     btree_insert_data(&root, "42", cmpf);
//     btree_insert_data(&root, "10", cmpf);
//     btree_insert_data(&root, "12", cmpf);
//     btree_insert_data(&root, "45", cmpf);

//     print_tree(root);

//     return 0;
// }