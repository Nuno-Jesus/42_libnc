/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_keys_setup.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:22:38 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 20:22:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_dict_keys_setup(t_dict *dict, int (*cmp)(), void *(*cpy)(), \
	void (*del)())
{
	dict->keycmp = cmp;
	dict->keycpy = cpy;
	dict->keydel = del;
}