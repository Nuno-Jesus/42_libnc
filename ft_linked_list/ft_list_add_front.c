/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:19 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_list_add_front(t_list **list, t_list *new)
{
	if (!new || !list)
		return ;
	if (!(*list))
		*list = new;
	else
	{
		new->next = *list;
		*list = new;
	}	
}
