/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:58:53 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 14:58:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_pair	*ft_pair_swap(t_pair *pair, void *(*keycpy)(), void *(*valcpy)())
{
	t_pair	*dup;
	void	*aux;

	dup = ft_pair_copy(pair, keycpy, valcpy);
	aux = dup->key;
	dup->key = dup->value;
	dup->value = aux;
	return (dup);
}