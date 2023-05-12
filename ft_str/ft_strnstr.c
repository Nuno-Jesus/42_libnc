/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:58:13 by crypto            #+#    #+#             */
/*   Updated: 2023/05/12 20:12:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;	

	if ((!big || !little) && len == 0)
		return (NULL);
	i = 0;
	little_len = ft_strlen(little);
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i <= len - little_len && len > 0)
	{
		if (big[i] == little[0])
			if (!ft_memcmp(big + i, little, little_len))
				return ((char *)big + i);
		i++;
	}	
	return (NULL);
}
