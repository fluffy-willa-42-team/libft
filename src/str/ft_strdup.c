/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:20:34 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:43:40 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_mem.h"
#include "lib_str.h"

/**
 * @brief Creates a copy of a given strings to another section of the memory.
 * 
 * @param s1 Any String.
 * @return Pointer to the copy.
 */
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, len);
	res[len - 1] = 0;
	return (res);
}
