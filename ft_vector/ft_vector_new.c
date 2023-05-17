/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:05:31 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 20:05:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_vector	*ft_vector_new(void *(*cpy)(), int (*cmp)(), void (*del)(),
	void (*print)())
{
	t_vector	*vector;

	vector = ft_calloc(1, sizeof(t_vector));
	if (!vector)
		return (NULL);
	vector->array = ft_calloc(1, sizeof(void *));
	if (!vector->array)
	{
		free(vector);
		return (NULL);
	}
	vector->cpy = cpy;
	vector->cmp = cmp;
	vector->del = del;
	vector->print = print;
	return (vector);
}