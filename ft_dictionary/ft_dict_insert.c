/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:07:00 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 17:07:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_dict_insert(t_dict *dict, void *key, void *value, void (*del)())
{
	t_pair		*pair;

	if (!dict || !key)
		return ;
	if (ft_dict_exists(dict, key))
	{
		pair = ft_dict_get(dict, key);
		del(pair->value);
		pair->value = value;
		return ;
	}
	pair = ft_pair_new(key, value);
	if (!pair)
		return ;
	dict->pairs = ft_bstree_insert(dict->pairs, pair, dict->keycmp, 0);
	dict->size++;
}