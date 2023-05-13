/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:45 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_list_iter(t_list *list, void (*f)(void *))
{
	if (!list || !f)
		return ;
	while (list != NULL)
	{
		f(list->content);
		list = list->next;
	}
}
