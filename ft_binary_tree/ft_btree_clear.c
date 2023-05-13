/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:21:20 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:21:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_btree_clear(t_btree *tree, void (*del)())
{
	if (!tree)
		return ;
	ft_btree_clear(tree->left, del);
	ft_btree_clear(tree->right, del);
	ft_btree_delete(tree, del);
}