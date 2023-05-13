/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:28:47 by marvin            #+#    #+#             */
/*   Updated: 2023/03/17 15:28:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_list_new(void *content);

void	ft_list_add_front(t_list **list, t_list *new);

int		ft_list_size(t_list *list);

t_list	*ft_list_last(t_list *list);

void	ft_list_add_back(t_list **list, t_list *new);

void	ft_list_delone(t_list *list, void (*del)(void*));

void	ft_list_clear(t_list **list, void (*del)(void*));

void	ft_list_iter(t_list *list, void (*f)(void *));

t_list	*ft_list_map(t_list *list, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Returns the node at the given index.
 * 
 * @param begin_list The first node of the list
 * @param nbr The index of the node to return
 * @return t_list* The node at the given index
 * @return NULL If the index is out of range
 */
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

/**
 * @brief Reverses the order of the nodes in the list.
 * 
 * @param begin_list A pointer to the first node of the list
 */
void	ft_list_reverse(t_list **begin_list);

/**
 * @brief Given a list to search on and a reference data to compare with,
 * returns the node of the list that matches the reference data. The 
 * comparison is achieved by using the given function pointer.
 * 
 * @param begin_list The first node of the list
 * @param data_ref The reference data to compare with
 * @param cmp The function pointer to use for the comparison
 * @return t_list* The node that matches the reference data
 * @return NULL If no node matches the reference data
 */
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

// char **ft_list_to_matrix(t_list *list);
#endif