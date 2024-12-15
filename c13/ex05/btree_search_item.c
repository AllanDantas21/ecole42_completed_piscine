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

    if (root == NULL)
        return (NULL);
    result = btree_search_item(root->left, data_ref, cmpf);
    if (result != NULL)
        return (result);
    if (cmpf(root->item, data_ref) == 0)
        return (root->item);
    result = btree_search_item(root->right, data_ref, cmpf);
    if (result != NULL)
        return (result);
    return (NULL);
}