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
	void		*data;

	data = node->data;
	if (copy)
		data = copy(node->data);
	dup = ft_bstree_new(data, node->depth);
	if (!dup)
		return (NULL);
	return (dup);
}
