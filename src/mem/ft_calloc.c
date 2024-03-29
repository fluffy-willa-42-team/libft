/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:14:59 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:58 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_mem.h"
#include <stdlib.h>

/**
 * @brief Allocates memory and sets it to zero for the given size.
 * 
 * @param count Number of elements to allocates.
 * @param size Size of the element you want to add.
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size)
{
	int		*res;

	res = malloc(size * count);
	if (!res)
		return (NULL);
	return (ft_memset(res, 0, count * size));
}
