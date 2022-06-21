/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:15:07 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:29 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Copy every bytes from the sources to the destination
 * in non protected way.
 * 
 * @param dst Any array.
 * @param src Any array.
 * @param len The length we are going to copy.
 * @return Pointer to the destination.
 */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*memdst;
	unsigned char	*memsrc;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	memdst = (unsigned char *) dst;
	memsrc = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		memdst[i] = memsrc[i];
		i++;
	}
	return ((void *) memdst);
}
