/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:41:30 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:56:09 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"
#include <limits.h>

/**
 * @brief Gives the length of a given string.
 * 
 * @param s Any string.
 * @return The length of the given string.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] && i != LONG_MAX)
		i++;
	return (i);
}
