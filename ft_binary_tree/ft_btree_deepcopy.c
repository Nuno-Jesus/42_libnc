/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_deepcopy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:37:20 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:37:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_btree	*ft_btree_deepcopy(t_btree *tree, void *(*copy)())
{
	t_btree	*dup;

	if (!tree)
		return (NULL);
	dup = ft_btree_copy(tree, copy);
	dup->left = ft_btree_deepcopy(tree->left, copy);
	dup->right = ft_btree_deepcopy(tree->right, copy);
	return (dup);
}