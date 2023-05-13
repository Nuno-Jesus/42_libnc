/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:42 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/05/12 20:07:40 by marvin           ###   ########.fr       */
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
