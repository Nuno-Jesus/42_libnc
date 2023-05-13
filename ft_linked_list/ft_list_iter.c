/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:54 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/05/12 20:07:57 by marvin           ###   ########.fr       */
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
