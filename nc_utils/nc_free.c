/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nc_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:05:43 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/07/06 18:05:47 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnc.h"

void	nc_free(void *ptr)
{
	if (ptr)
		free(ptr);
}