/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:41:30 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:00 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Sets to the given char the given array for the given length.
 * 
 * @param b Pointer to any array.
 * @param c The character we are going to put.
 * @param len The length we are going to put the character in.
 * @return Pointer the array.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*mem;

	mem = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		mem[i] = (unsigned char) c;
		i++;
	}
	return (mem);
}
