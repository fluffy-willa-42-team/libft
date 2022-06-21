/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:14:56 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:55:13 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_mem.h"
#include <stddef.h>

/**
 * @brief Sets to zero the given array for the given length.
 * 
 * @param s Pointer to any array.
 * @param n The number bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
