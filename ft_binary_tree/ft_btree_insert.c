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

t_btree	*ft_btree_insert(t_btree *tree, void *data, int (*cmp)(), \
	uint32_t depth)
{
	if (!tree)
		return (ft_btree_new(data, depth));
	else if (cmp(data, tree->content) < 0)
		tree->left = ft_btree_insert(tree->left, data, cmp, depth + 1);
	else
		tree->right = ft_btree_insert(tree->right, data, cmp, depth + 1);
	return (tree);
}