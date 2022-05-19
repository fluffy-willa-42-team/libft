/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:41:30 by awillems          #+#    #+#             */
/*   Updated: 2022/02/08 09:05:28 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
