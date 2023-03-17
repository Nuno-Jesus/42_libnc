/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:38:10 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/03/17 15:24:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
/* 
int main(int argc, char **argv)
{
	(void)argc;
	
	int res = atoi(argv[1]);
	printf("\n\t>>> USING isprint() <<<\n\n");
	printf("Sending \'%c\'\n", res);
	
	if (isprint(res))
		printf("The char \'%c\' is printable.\n", res);
	else
		printf("The char \'%c\' is NOT printable.\n", res);
	
	printf("\n\t>>> USING ft_isprint() <<<\n\n");
	printf("Sending \'%c\'\n", res);
	
	if (ft_isprint(res))
		printf("The char \'%c\' is printable.\n", res);
	else
		printf("The char \'%c\' is NOT printable.\n", res);
} */