/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_insert.c                                  :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:20:41 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 17:20:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_bstree	*ft_bstree_insert(t_bstree *tree, void *data, int (*cmp)(), \
	uint32_t depth)
{
	if (!tree)
		return (ft_bstree_new(data, depth));
	else if (cmp(data, tree->data) < 0)
		tree->left = ft_bstree_insert(tree->left, data, cmp, depth + 1);
	else
		tree->right = ft_bstree_insert(tree->right, data, cmp, depth + 1);
	return (tree);
}
