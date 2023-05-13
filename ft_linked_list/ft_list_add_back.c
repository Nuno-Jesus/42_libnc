/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:27 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_list_add_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (!new || !list)
		return ;
	if (!(*list))
		*list = new;
	else
	{
		last = ft_list_last(*list);
		last->next = new;
	}
}
