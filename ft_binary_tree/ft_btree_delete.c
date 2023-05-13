/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:52:01 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 17:52:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_btree_delete(t_btree *node, void (*del)())
{
	if (!node)
		return ;
	if (*del)
		(*del)(node->content);
	free(node);
}