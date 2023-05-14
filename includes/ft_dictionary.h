/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:00:42 by marvin            #+#    #+#             */
/*   Updated: 2023/05/14 16:00:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICTIONARY_H
# define FT_DICTIONARY_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

# include "ft_bstree.h"
# include "ft_pair.h"

typedef struct s_dict
{
	int			(*keycmp)();
	int			(*valcmp)();
	void		*(*keycpy)();
	void		*(*valcpy)();
	uint32_t	size;
	t_bstree	*pairs;
}t_dict;

/**
 * @brief Creates a new dictionary struct and initializes it with the given
 * parameters. The keycmp should not be NULL.
 * 
 * @note The key and val functions are relative to the key and 
 * value of a t_pair struct. In other words, this functions should receive
 * t_pair pointers as parameters.
 * @param keycmp The function used to compare keys.
 * @param valcmp The function used to compare values.
 * @param keycpy The function used to copy keys.
 * @param valcpy The function used to copy values.
 * @return t_dict* A pointer to the new dictionary.
 * @return NULL If the allocation failed.
 */
t_dict	*ft_dict_new(int (*keycmp)(), int (*valcmp)(), void	*(*keycpy)(), \
	void *(*valcpy)());

/**
 * @brief Duplicates the given dictionary into a new one.
 * 
 * @param dict The dictionary to duplicate
 * @return t_dict* The new dictionary
 * @return NULL If the allocation failed
 */
t_dict	*ft_dict_copy(t_dict *dict);

/**
 * @brief Returns the value associated with the given key.
 * 
 * @param dict The dict to search on
 * @param key The key to search for
 * @return void* The mapped value of the key
 * @return NULL If the key does not exist
 */
void	*ft_dict_get(t_dict *dict, void *key);

/**
 * @brief Returns true if the given key exists in the dictionary.
 * 
 * @param dict The dictionary to search on
 * @param key The key to search for
 * @return true If the key exists
 * @return false Otherwise
 */
bool	ft_dict_exists(t_dict *dict, void *key);

void	ft_dict_replace(t_dict *dict, void *key, void *value);

/**
 * @brief Inserts a new pair into the dictionary. If the key already exists
 * the value will be replaced.
 * @param dict The dictionary to insert into.
 * @param key The key of the pair
 * @param value The value of the pair
 */
void	ft_dict_insert(t_dict *dict, void *key, void *value);

void	ft_dict_remove(t_dict *dict, void *key);

void	ft_dict_merge(t_dict *d1, t_dict *d2);

t_pair	*ft_dict_to_array(t_dict *dict);

void	**ft_dict_keys(t_dict *dict);

void	**ft_dict_values(t_dict *dict);

void	ft_dict_clear(t_dict *dict);

void	ft_dict_delete(t_dict *dict);

void	ft_dict_print(t_dict *dict, void *(*keystr)(), void *(*valstr)());

void	ft_dict_map(t_dict *dict, void *(*keymap)(), void *(*valmap)());

#endif