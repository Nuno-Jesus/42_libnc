/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:42:23 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/03/17 15:24:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	ft_putendl_fd(char *s, int fd)
{	
	if (fd < 0)
		return ;
	if (s)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/* 
int main(int argc, char **argv)
{
	(void) argc;
	ft_putendl_fd(argv[1], STDOUT_FILENO);
} */