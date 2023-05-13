/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:24 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/05/12 20:07:34 by marvin           ###   ########.fr       */
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
