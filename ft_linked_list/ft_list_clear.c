/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:46 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/05/12 20:07:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_list_clear(t_list **list, void (*del)(void *))
{
	t_list	*curr;

	if (!list || !(*list) || !del)
		return ;
	while (*list != NULL)
	{
		curr = *list;
		*list = (*list)->next;
		ft_list_delone(curr, del);
	}
}
