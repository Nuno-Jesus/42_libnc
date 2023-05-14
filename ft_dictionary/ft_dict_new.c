/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:33:02 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 16:33:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_dict	*ft_dict_new()
{
	t_dict	*dict;

	dict = ft_calloc(1, sizeof(t_dict));
	if (!dict)
		return (NULL);
	return (dict);
}
