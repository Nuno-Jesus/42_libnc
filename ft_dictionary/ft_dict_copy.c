/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:43:48 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 18:43:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static t_bstree	*helper(t_bstree *tree, void *(*keycpy)(), void *(*valcpy)())
{
	t_bstree	*node;
	t_pair		*pair;

	if (!tree)
		return (NULL);
	pair = tree->data;
	node = ft_bstree_new(ft_pair_copy(pair, keycpy, valcpy), 0);
	node->left = helper(tree->left, keycpy, valcpy);
	node->right = helper(tree->right, keycpy, valcpy);
	return (node);
}

t_dict	*ft_dict_copy(t_dict *dict)
{
	t_dict	*copy;

	copy = ft_dict_new();
	ft_dict_keys_setup(dict, dict->keycmp, dict->keycpy, dict->keydel);
	ft_dict_values_setup(dict, dict->valcmp, dict->valcpy, dict->valdel);
	if (!copy)
		return (NULL);
	copy->pairs = helper(dict->pairs, dict->keycpy, dict->valcpy);
	return (dict);
}