/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nc_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:52:16 by ncarvalh          #+#    #+#             */
/*   Updated: 2023/07/04 15:15:47 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NC_UTILS_H
# define NC_UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <ctype.h>

/**
 * @brief Checks how many digits the number will have
 * 
 * @param n The number to check
 * @return int The size of the number
 */
int	nc_numlen(int n);

/**
 * @brief Given a string, it counts the occurences of the char c
 * int the string str
 * 
 * @param str The string to look on
 * @param c The character to search for
 * @return int The number of occurences 
 */
int	nc_count(char *str, char c);

#endif