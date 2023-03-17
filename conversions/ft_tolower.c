/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:13:52 by crypto            #+#    #+#             */
/*   Updated: 2023/03/17 15:23:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/* 
int main(int argc, char **argv)
{
	(void)argc;
	printf("\n\t>>> USING tolower() <<<\n\n");
	
	printf("Sending \'%s\'\n", argv[1]);
	printf("Returning: ");
	for(int i = 0; argv[1][i]; i++)
		printf("%c", tolower(argv[1][i]));
	printf("\n");
	
	printf("\n\t>>> USING ft_tolower() <<<\n\n");
	
	printf("Sending \'%s\'\n", argv[1]);
	printf("Returning: ");
	for(int i = 0; argv[1][i]; i++)
		printf("%c", ft_tolower(argv[1][i]));
	printf("\n");
} */
