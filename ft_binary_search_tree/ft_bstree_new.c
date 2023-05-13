/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_new.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:08:47 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 17:08:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_bstree	*ft_bstree_new(void *content, uint32_t depth)
{
	t_bstree	*node;

	node = ft_calloc(1, sizeof(t_bstree));
	if (!node)
		return (NULL);
	node->content = content;
	node->depth = depth;
	return (node);
}
