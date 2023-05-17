/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:52:13 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 19:52:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

typedef struct s_vector
{
	uint32_t	size;
	int			(*cmp)();
	void		(*del)();
	void		*(*cpy)();
	void 		(*print)();
	void		**array;
}t_vector;

t_vector	*ft_vector_new(void *(*cpy)(), int (*cmp)(), void (*del)(),
	void (*print)());

void		ft_vector_push(t_vector *vector, void *element);

void		ft_vector_pop(t_vector *vector);

t_vector	*ft_vector_copy(t_vector *vector);

void		*ft_vector_find(t_vector *vector, void *element);

void		ft_vector_clear(t_vector *vector);

void		ft_vector_delete(t_vector *vector);

void		*ft_vector_at(t_vector *vector, uint32_t i);

t_vector	*ft_vector_merge(t_vector *v1, t_vector *v2);

void		ft_vector_print(t_vector *vector);

#endif