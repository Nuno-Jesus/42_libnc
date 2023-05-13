/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:46:58 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 16:46:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

typedef enum e_traversal
{
	PREORDER,
	INORDER,
	POSTORDER
}t_traversal;

typedef struct s_btree
{
	void			*content;
	uint32_t		depth;
	struct s_btree	*left;
	struct s_btree	*right;
}t_btree;

t_btree	*ft_btree_new(void *content, uint32_t depth);

t_btree	*ft_btree_copy(t_btree *node, void (*copy)());

t_btree	*ft_btree_deepcopy(t_btree *tree, void (*copy)());

t_btree	*ft_btree_insert(t_btree *tree, void *data, int (*cmp)(), \
	uint32_t depth);
	
t_btree	*ft_btree_find(t_btree *tree, void *data, bool (*cmp)());

void	ft_btree_delete(t_btree *node, void (*del)());

void	ft_btree_clear(t_btree *tree, void (*del)());

void	ft_btree_print(t_btree *tree, void (*print)());

void	ft_btree_traverse(t_btree **tree, void (*f)(), t_traversal type);

#endif