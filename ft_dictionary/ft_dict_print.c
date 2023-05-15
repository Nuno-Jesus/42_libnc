/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:50:57 by marvin            #+#    #+#             */
/*   Updated: 2023/05/15 13:50:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void	helper(t_bstree *tree, t_dict *dict)
{
	t_pair *pair;
	char 	*key;
	char 	*value;

	if (!tree)
		return ;
	helper(tree->left, dict);
	pair = tree->data;
	key = (*dict->keystr)(pair->key);
	value = (*dict->valstr)(pair->value);
	ft_putstr_fd(key, STDOUT_FILENO);
	ft_putstr_fd(":", STDOUT_FILENO);
	ft_putendl_fd(value, STDOUT_FILENO);
	free(key);
	free(value);
	helper(tree->right, dict);
}

void	ft_dict_print(t_dict *dict)
{
	if (!dict || !dict->pairs || !dict->keystr|| !dict->valstr)
		return ;
	helper(dict->pairs, dict);
}