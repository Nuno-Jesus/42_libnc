/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:43:47 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/03/17 15:24:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
/* 
int main(int argc, char **argv)
{
	(void) argc;
	ft_putstr_fd(argv[1], STDOUT_FILENO);
} */