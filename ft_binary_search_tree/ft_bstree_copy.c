/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree_copy.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:34:38 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 18:34:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_bstree	*ft_bstree_copy(t_bstree *node, void *(*copy)())
{
	t_bstree	*dup;
	void		*content;

	content = node->content;
	if (copy)
		content = copy(node->content);
	dup = ft_bstree_new(content, node->depth);
	if (!dup)
		return (NULL);
	return (dup);
}
