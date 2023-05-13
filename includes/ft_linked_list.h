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

#endif