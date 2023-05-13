/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:46:51 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 14:46:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_pair	*ft_pair_copy(t_pair *pair, void *(*keycpy)(), void *(*valcpy)())
{
	t_pair	*copy;
	void	*key;
	void	*value;

	key = pair->key;
	value = pair->value;
	if (keycpy)
		key = keycpy(pair->key);
	if (valcpy)
		value = valcpy(pair->value);
	copy = ft_pair_new(key, value);
	if (!copy)
		return (NULL);
	return (copy);
}
