/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:35:50 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:35:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_list	*ft_list_last(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}
