/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:44:57 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:44:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_btree	*ft_btree_find(t_btree *tree, void *data, int (*cmp)())
{
	t_btree	*node;

	if (!tree)
		return (NULL);
	if (!(*cmp)(tree->content, data))
		return (tree);
	node = ft_btree_find(tree->left, data, cmp);
	if (!node)
		node = ft_btree_find(tree->right, data, cmp);
	return (node);
}