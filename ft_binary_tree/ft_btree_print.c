/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:23:49 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:23:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void helper(t_btree *node, void (*print)())
{
	for (uint32_t i = 0; i < node->depth; i++)
		ft_putstr_fd("│   ", STDOUT_FILENO);
	if (node->left)
		ft_putstr_fd("├── ", STDOUT_FILENO);
	else 
		ft_putstr_fd("└── ", STDOUT_FILENO);
	print(node);
}

void	ft_btree_print(t_btree *tree, void (*print)())
{
	if (!tree)
		return ;
	helper(tree, print);
	ft_btree_print(tree->right, print);
	ft_btree_print(tree->left, print);
}