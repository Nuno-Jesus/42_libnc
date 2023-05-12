/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:40:18 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 22:40:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

char	**ft_matrix_new(size_t lines, size_t columns);

void	*ft_matrix_copy(void *matrix, void *(*copy)());

void	*ft_matrix_append(void *matrix, void *data);

size_t	ft_matrix_size(void *matrix);

void	ft_matrix_delete(void *matrix);

void	ft_matrix_print(void *matrix, void (*f)());

#endif