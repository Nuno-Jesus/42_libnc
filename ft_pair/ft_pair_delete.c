/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:03:53 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 15:03:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_pair_delete(t_pair *pair, void (*keydel)(), void (*valdel)())
{
	if (!pair)
		return ;
	if (keydel && pair->key)
		keydel(pair->key);
	if (valdel && pair->value)
		valdel(pair->value);
	free(pair);
}
