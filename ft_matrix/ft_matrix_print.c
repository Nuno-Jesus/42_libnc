/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 23:33:24 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 23:33:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_matrix_print(void *matrix, void (*print)())
{
	size_t	i;

	i = -1;
	while (((void **)matrix)[++i])
		(*print)(((void **)matrix)[i], i);
	ft_putstr_fd("matrix[", STDOUT_FILENO);
	ft_putnbr_fd(i, STDOUT_FILENO);
	ft_putendl_fd("]=NULL", STDOUT_FILENO);
}
