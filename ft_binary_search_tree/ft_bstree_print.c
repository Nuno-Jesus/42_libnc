/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_print.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:23:49 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:23:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void	helper(t_bstree *node, void (*print)())
{
	uint32_t	i;

	i = -1;
	while (++i < node->depth)
		ft_putstr_fd("│   ", STDOUT_FILENO);
	if (node->left)
		ft_putstr_fd("├── ", STDOUT_FILENO);
	else
		ft_putstr_fd("└── ", STDOUT_FILENO);
	print(node->content);
}

void	ft_bstree_print(t_bstree *tree, void (*print)())
{
	if (!tree)
		return ;
	helper(tree, print);
	ft_bstree_print(tree->right, print);
	ft_bstree_print(tree->left, print);
}
