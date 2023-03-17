/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:46:54 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/03/17 15:25:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	k;
	size_t	dst_len;
	size_t	src_len;

	k = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	while (src[k] != '\0' && k < size - dst_len - 1)
	{
		dst[dst_len + k] = src[k];
		k++;
	}
	dst[dst_len + k] = '\0';
	return (dst_len + src_len);
}
/* 
int main(){
	char dest[10] = "Hello";
	char src[] = "World";
	
	printf("Sending str1 = \"%s\" and str2 = \"%s\"\n", dest, src); 
	int res = ft_strlcat(dest, src, 1);
	
	printf("strlcat return = %d\n", res);
	printf("Returning str1 = \"%s\" and str2 = \"%s\"\n", dest, res, src); 
}
 */