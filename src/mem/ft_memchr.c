/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:15:02 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:42 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Find the given character in the array.
 * 
 * @param s Pointer to an array.
 * @param c Character to find.
 * @param n Size of the array.
 * @return Pointer to the first occurrence of the character.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memstr;
	size_t			i;

	memstr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (memstr[i] == (unsigned char) c)
			return ((void *)memstr + i);
		i++;
	}
	return (NULL);
}
