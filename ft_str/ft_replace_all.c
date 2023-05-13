/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:35:18 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 15:35:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

char	*ft_replace_all(char *str, char *old, char *new)
{
	char	*res;
	char	*tmp;

	res = ft_strdup(str);
	while (ft_strnstr(res, old, ft_strlen(res)))
	{
		tmp = res;
		res = ft_replace(res, old, new);
		free(tmp);
	}
	return (res);
}