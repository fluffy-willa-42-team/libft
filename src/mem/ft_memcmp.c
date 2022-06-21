/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:15:04 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:36 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compares two arrays and returns 0 if identical,
 * else returns differences between the bytes not identical.
 * 
 * @param s1 Any array.
 * @param s2 Any array.
 * @param n Length of bytes we are going to check.
 * @return The differences between the bytes not identical. 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*memstr1;
	unsigned char	*memstr2;
	size_t			i;

	memstr1 = (unsigned char *)s1;
	memstr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (memstr1[i] != memstr2[i])
			return (memstr1[i] - memstr2[i]);
		i++;
	}
	return (0);
}
