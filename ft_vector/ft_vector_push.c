/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:07:59 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 20:07:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_vector_push(t_vector *vector, void *element)
{
	void	**matrix;

	matrix = ft_matrix_append(vector->array, element, vector->cpy);
	ft_matrix_delete(vector->array, vector->del);
	vector->array = matrix;
	vector->size++;
}