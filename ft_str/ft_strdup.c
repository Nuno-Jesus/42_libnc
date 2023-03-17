/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:45:40 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/03/17 15:24:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(s) + 1;
	dup = (char *)malloc(size);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, size);
	return (dup);
}
/* 
int main (int argc, char **argv)
{
	(void)argc;
	char *res = strdup(argv[1]);
	printf("\n\t>>> USING strdup() <<<\n\n");
	printf("Sending argv[1] = \'%s\'\n", argv[1]);
	printf("Returning res = \'%s\'\n", res);
	
	char *res2 = ft_strdup(argv[1]);
	printf("\n\t>>> USING ft_strdup() <<<\n\n");
	printf("Sending argv[1] = \'%s\'\n", argv[1]);
	printf("Returning res2 = \'%s\'\n", res2);
}
 */