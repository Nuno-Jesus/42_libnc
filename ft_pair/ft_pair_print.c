/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:32:12 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 14:32:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_pair_print(t_pair *pair, char *(*p1)(), char *(*p2)())
{
	char	*key;
	char	*value;

	key = p1(pair->key);
	value = p2(pair->value);
	ft_putstr_fd("pair[", STDOUT_FILENO);
	ft_putstr_fd(key, STDOUT_FILENO);
	ft_putstr_fd("]=", STDOUT_FILENO);
	ft_putendl_fd(value, STDOUT_FILENO);
	free(key);
	free(value);
}