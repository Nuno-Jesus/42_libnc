/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nc_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:31:32 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/07/04 16:35:27 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

static void	get_numbers(char *str, int *n1, int *n2, int *len)
{
	char	*first_part;
	char	*second_part;
	char	*tmp;

	tmp = nc_strchr(str, '.');
	if (tmp == NULL)
	{
		*n1 = nc_atoi(str);
		*n2 = 0;
		return ;
	}
	*len = tmp - str;
	first_part = nc_substr(str, 0, *len);
	second_part = nc_substr(str, *len + 1, (nc_strlen(str) - *len));
	*n1 = nc_atoi(first_part);
	*n2 = nc_atoi(second_part);
	free(first_part);
	free(second_part);
	*len = nc_numlen(*n2);
}

static int	pow(int n, int power)
{
	while (power > 1)
	{
		n = n * n;
		power--;
	}
	return (n);
}

float	nc_atof(char *str)
{
	float	nbr;
	int		n1;
	int		n2;
	int		len;

	n1 = 0;
	n2 = 0;
	len = 0;
	get_numbers(str, &n1, &n2, &len);
	if (n1 >= 0)
		nbr = n1 + ((float) n2 / (float) pow(10, len));
	else
		nbr = n1 - ((float) n2 / (float) pow(10, len));
	return (nbr);
}
