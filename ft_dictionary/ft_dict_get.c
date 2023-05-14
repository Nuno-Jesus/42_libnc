/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:07:28 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 19:07:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void	*helper(t_bstree *tree, void *key, int (*cmp)())
{
	void	*value;
	t_pair	*pair;

	if (!tree)
		return (0);
	pair = tree->content;
	if (!cmp(pair->key, key))
		return (pair->value);
	value = helper(tree->left, key, cmp);
	if (!value)
		value = helper(tree->right, key, cmp);
	return (value);
}

void	*ft_dict_get(t_dict *dict, void *key)
{
	void	*value;

	if (!dict || !key)
		return (NULL);
	value = helper(dict->pairs, key, dict->keycmp);
	return (value);
}