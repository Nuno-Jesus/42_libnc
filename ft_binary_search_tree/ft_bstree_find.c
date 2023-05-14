/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_find.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:44:57 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:44:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_bstree	*ft_bstree_find(t_bstree *tree, void *data, int (*cmp)())
{
	t_bstree	*node;

	if (!tree)
		return (NULL);
	if (!(*cmp)(tree->data, data))
		return (tree);
	node = ft_bstree_find(tree->left, data, cmp);
	if (!node)
		node = ft_bstree_find(tree->right, data, cmp);
	return (node);
}
