/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:54:31 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 11:54:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

uint32_t	ft_bstree_height(t_bstree *tree)
{
	uint32_t	left_height;
	uint32_t	right_height;

	if (!tree)
		return (-1);
	left_height = ft_bstree_height(tree->left);
	right_height = ft_bstree_height(tree->right);
	return (MAX(left_height + 1, right_height + 1));
}
