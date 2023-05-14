/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:49:36 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 11:49:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

uint32_t	ft_bstree_count(t_bstree *tree)
{
	uint32_t	nodes;

	if (!tree)
		return (0);
	nodes = 1;
	nodes += ft_bstree_count(tree->left);
	nodes += ft_bstree_count(tree->right);
	return (nodes);
}
