/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:20:41 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 17:20:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_btree	*ft_btree_insert(t_btree *tree, t_btree *node, int (*cmp)())
{
	if (!(tree))
		return (node);
	else if (cmp(node->content, tree->content) < 0)
		tree->left = ft_btree_insert(tree->left, node, cmp);
	else
		tree->right = ft_btree_insert(tree->right, node, cmp);
	return (tree);
}