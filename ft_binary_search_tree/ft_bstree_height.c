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

static int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

uint32_t 	ft_bstree_height(t_bstree *tree)
{
	uint32_t	left_height;
	uint32_t	right_height;

	if (!tree)
		return (-1);
	left_height = ft_bstree_height(tree->left);
	right_height = ft_bstree_height(tree->right);
	printf("The left height is: %u\n", left_height);
	printf("The right height is: %u\n", right_height);
	return (ft_max(left_height, right_height) + 1);
}