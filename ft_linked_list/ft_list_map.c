/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:53 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_list	*ft_list_map(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list2;
	t_list	*node;

	list2 = NULL;
	if (!list || !f || !del)
		return (NULL);
	while (list != NULL)
	{
		node = ft_list_new(f(list->content));
		if (!node)
		{
			ft_list_clear(&list, del);
			return (NULL);
		}
		ft_list_add_back(&list2, node);
		list = list->next;
	}
	return (list2);
}
