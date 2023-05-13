/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_tostring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:07:08 by marvin            #+#    #+#             */
/*   Updated: 2023/05/13 15:07:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

char	*ft_pair_tostring(t_pair *pair, char *(*keystr)(), char *(*valstr)())
{
	char	*key;
	char	*value;
	char	*tmp;
	char	*res;

	key = keystr(pair->key);
	value = valstr(pair->value);
	tmp = ft_strjoin("pair[\'", key);
	res = ft_strjoin(tmp, "\']=\'");
	free(tmp);
	tmp = ft_strjoin(res, value);
	free(res);
	res = ft_strjoin(tmp, "\'");
	free(tmp);
	free(value);
	free(key);
	return (res);
}