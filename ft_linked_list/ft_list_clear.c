/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:32 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:34 by marvin           ###   ########.fr       */
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
