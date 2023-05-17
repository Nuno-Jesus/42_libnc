/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:38:27 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 20:38:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

t_vector	*ft_vector_copy(t_vector *vector)
{
	t_vector	*copy;

	copy = ft_vector_new(vector->cpy, vector->cmp, vector->del, vector->print);
	if (!copy)
		return (NULL);
	copy->size = vector->size;
	ft_matrix_delete(copy->array, copy->del);
	copy->array = ft_matrix_copy(vector->array, copy->cpy);
	return (copy);
}
