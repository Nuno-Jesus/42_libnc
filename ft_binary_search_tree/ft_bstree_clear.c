/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_clear.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:21:20 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:21:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_bstree_clear(t_bstree *tree, void (*del)())
{
	if (!tree)
		return ;
	ft_bstree_clear(tree->left, del);
	ft_bstree_clear(tree->right, del);
	ft_bstree_delete(tree, del);
}
