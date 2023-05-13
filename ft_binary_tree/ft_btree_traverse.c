/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:56:21 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 17:56:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void postorder(t_btree **tree, void (*f)())
{
	if (!(*tree))
		return ;
	if (*f)
		(*f)(*tree);
	postorder(&(*tree)->left, f);
	postorder(&(*tree)->right, f);
}

static void preorder(t_btree **tree, void (*f)())
{
	if (!(*tree))
		return ;
	preorder(&(*tree)->left, f);
	preorder(&(*tree)->right, f);
	if (*f)
		(*f)(*tree);
}

static void inorder(t_btree **tree, void (*f)())
{
	if (!(*tree))
		return ;
	inorder(&(*tree)->right, f);
	if (*f)
		(*f)(*tree);
	inorder(&(*tree)->left, f);
}

void	ft_btree_traverse(t_btree **tree, void (*f)(), t_traversal type)
{
	if (!tree)
		return ;
	if (type == INORDER)
		inorder(tree, f);
	else if (type == PREORDER)
		preorder(tree, f);
	else if (type == POSTORDER)
		postorder(tree, f);
	else
		return ;
}