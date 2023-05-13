/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:39:03 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/05/12 20:08:08 by marvin           ###   ########.fr       */
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
