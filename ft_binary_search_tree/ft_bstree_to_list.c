/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_to_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:12:55 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 12:12:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_list		*ft_bstree_to_list(t_bstree *tree, void *(*copy)())
{
	t_list	*left;
	t_list	*right;

	left = NULL;
	if (!tree)
		return (NULL);
	left = ft_bstree_to_list(tree->left, copy);
	ft_list_add_back(&left, ft_list_new(copy(tree->content)));
	right = ft_bstree_to_list(tree->right, copy);
	ft_list_add_back(&left, right);
	return (left);
}

