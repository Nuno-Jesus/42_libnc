/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:56:29 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 20:56:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	**ft_matrix_merge(void **m1, void **m2, void *(*copy)())
{
	void		**matrix;
	uint32_t	firstSize;
	uint32_t	secondSize;
	uint32_t	i;

	firstSize = ft_matrix_size(m1);
	secondSize = ft_matrix_size(m2);
	matrix = ft_matrix_new(firstSize + secondSize, 0);
	if (!matrix)
		return (NULL);
	i = -1;
	while (++i < firstSize)
		matrix[i] = (*copy)(m1[i]);
	i = -1;
	while (++i < secondSize)
		matrix[i + firstSize] = (*copy)(m2[i]);
	return (matrix);
}