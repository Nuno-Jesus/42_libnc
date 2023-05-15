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
	void		(*keydel)();
	char		*(*keystr)();
	void		*(*keycpy)();
	void		(*valdel)();
	char		*(*valstr)();
	void		*(*valcpy)();
	uint32_t	size;
	t_bstree	*pairs;
}t_dict;

/**
 * @brief Creates a new dictionary struct. This function should be immediately
 * followed by a call to ft_dict_values_setup.
 * 
 * @return t_dict* A pointer to the new dictionary.
 * @return NULL If the allocation failed.
 */
t_dict	*ft_dict_new(int (*keycmp)(), void *(*keycpy)(), void (*keydel)(), \
	char *(*keystr)());

/**
 * @brief Setups the dictionary with function to treat values.
 */
void	ft_dict_values_setup(t_dict *dict, void *(*valcpy)(), void (*valdel)(), \
	char *(*valstr)());

/**
 * @brief Duplicates the given dictionary into a new one.
 * 
 * @param dict The dictionary to duplicate
 * @return t_dict* The new dictionary
 * @return NULL If the allocation failed
 */
t_dict	*ft_dict_copy(t_dict *dict);

/**
 * @brief Returns a t_pair pointer to a pair if the given key exists in the
 * dictionary.
 * 
 * @param dict The dict to search on
 * @param key The key to search for
 * @return t_pair* The key and the matching value
 * @return NULL If the key does not exist
 */
t_pair	*ft_dict_get(t_dict *dict, void *key);

/**
 * @brief Returns true if the given key exists in the dictionary.
 * 
 * @param dict The dictionary to search on
 * @param key The key to search for
 * @return true If the key exists
 * @return false Otherwise
 */
bool	ft_dict_exists(t_dict *dict, void *key);

/**
 * @brief Inserts a new pair into the dictionary. If the key already exists
 * the value will be replaced.
 * @param dict The dictionary to insert into.
 * @param key The key of the pair
 * @param value The value of the pair
 */
void	ft_dict_insert(t_dict *dict, void *key, void *value);

/**
 * @brief Removes the pair with the given key from the dictionary. 
 * 
 * @param dict The dictionary to remove from
 * @param key The key of the pair to remove
 */
void	ft_dict_remove(t_dict *dict, void *key);

/**
 * @brief Shapes the dictionary into a list of t_pair pointers.
 * 
 * @param dict The dictionary to transform
 * @return t_list* The list of t_pair pointers
 * @return NULL If the allocation failed or if the dictionary is empty
 */
t_list	*ft_dict_to_list(t_dict *dict);

/**
 * @brief Returns a list of the keys of the dictionary.
 * 
 * @param dict The dictionary to transform
 * @return t_list* The list of keys
 * @return NULL If the allocation failed or if the dictionary is empty
 */
t_list	*ft_dict_keys(t_dict *dict);

/**
 * @brief Returns a list of the values of the dictionary.
 * 
 * @param dict The dictionary to transform
 * @return t_list* The list of values
 * @return NULL If the allocation failed or if the dictionary is empty
 */
t_list	*ft_dict_values(t_dict *dict);

/**
 * @brief Clears all the pairs from the dictionary, reseting its size to 0.
 * 
 * @param dict The dictionary to clear
 */
void	ft_dict_clear(t_dict *dict);

/**
 * @brief Deletes the dictionary and all its pairs.
 * 
 * @param dict The dictionary to delete
 */
void	ft_dict_delete(t_dict *dict);

/**
 * @brief Prints the dictionary to stdout.
 * 
 * @param dict The dictionary to print
 * @param keystr The function to print the keys
 * @param valstr The function to print the values
 */
void	ft_dict_print(t_dict *dict);

// void	ft_dict_merge(t_dict *d1, t_dict *d2);
#endif