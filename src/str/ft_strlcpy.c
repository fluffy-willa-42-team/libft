/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:29:20 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 10:11:54 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies every character in the sources string to the destination string
 * and returns the length of the source.
 * 
 * @param dst Any string.
 * @param src Any string.
 * @param len The number of characters we copy.
 * @return The length of the source.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	if (len > 0)
	{
		i = 0;
		while (i < len - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
