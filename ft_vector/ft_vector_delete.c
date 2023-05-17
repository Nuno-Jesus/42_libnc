/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:32:21 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 20:32:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_vector_delete(t_vector *vector)
{
	if (!vector)
		return ;
	ft_vector_clear(vector);
	ft_matrix_delete(vector->array, vector->del);
	free(vector);
}