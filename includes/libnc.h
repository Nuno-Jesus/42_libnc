/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:44 by crypto            #+#    #+#             */
/*   Updated: 2023/05/17 20:04:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNC_H
# define LIBNC_H

//! Standard libraries and some more
# include "ft_is.h"
# include "ft_str.h"
# include "ft_print.h"
# include "ft_memory.h"
# include "ft_conversions.h"

//! Data structures
# include "ft_pair.h"
# include "ft_matrix.h"
# include "ft_vector.h"
# include "ft_bstree.h"
# include "ft_dictionary.h"
# include "ft_linked_list.h"

//! Useful macros
# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define MIN(a, b) ((a) < (b) ? (a) : (b))
# define ABS(x) ((x) < 0 ? -(x) : (x))

# define ODD(x) ((x) & 1)
# define EVEN(x) !ODD(x)

# define BIT(n) (1 << (n))

#endif
