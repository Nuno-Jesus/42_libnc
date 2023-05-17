/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libnc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:50:44 by crypto            #+#    #+#             */
/*   Updated: 2023/05/17 21:57:57 by marvin           ###   ########.fr       */
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

// Returns the maximum between a and b
# define MAX(a, b) ((a) > (b) ? (a) : (b))
// Returns the minimum between a and b
# define MIN(a, b) ((a) < (b) ? (a) : (b))
// Returns the absolute value of x
# define ABS(x) ((x) < 0 ? -(x) : (x))

// Returns 1 if x is odd, 0 otherwise
# define ODD(x) ((x) & 1)
// Returns 1 if x is even, 0 otherwise
# define EVEN(x) !ODD(x)

// Return the value of the nth bit of x
# define BIT(n) (1 << (n))

#endif
