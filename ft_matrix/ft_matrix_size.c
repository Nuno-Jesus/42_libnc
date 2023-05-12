/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:08:59 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 23:08:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

size_t	ft_matrix_size(void *matrix)
{
	size_t	i;

	i = 0;
	while (((void **)matrix)[i])
		i++;
	return (i);
}