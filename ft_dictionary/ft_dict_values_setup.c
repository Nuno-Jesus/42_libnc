/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_values_setup.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:21:12 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 20:21:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libnc.h"

void	ft_dict_values_setup(t_dict *dict, int (*cmp)(), void *(*cpy)(), \
	void (*del)())
{
	dict->valcmp = cmp;
	dict->valcpy = cpy;
	dict->valdel = del;
}