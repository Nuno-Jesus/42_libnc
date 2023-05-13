/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:16:42 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 14:16:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PAIR_H
# define FT_PAIR_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

typedef struct s_pair
{
	void	*key;
	void	*value;
}t_pair;

t_pair	*ft_pair_new(void *first, void *second);

t_pair	*ft_pair_copy(t_pair *pair, void (*copy1)(), void (*copy2)());

t_pair	*ft_pair_swap(t_pair *pair);

char	*ft_pair_tostring(t_pair *pair);

void	ft_pair_delete(t_pair *pair, void (*del1)(), void (*del2)());

void	ft_pair_print(t_pair *pair, void (*p1)(), void (*p2)());

#endif 