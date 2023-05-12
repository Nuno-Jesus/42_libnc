/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:45:10 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 22:45:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

char	**ft_matrix_new(size_t lines, size_t columns)
{
	char	**matrix;
	size_t	i;

	i = -1;
	matrix = ft_calloc(lines + 1, sizeof(char *));
	if (!matrix || !columns)
		return (matrix);
	while (++i < lines)
		matrix[i] = ft_calloc(columns + 1, sizeof(char));
	return (matrix);
}