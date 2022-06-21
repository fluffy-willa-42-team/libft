/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:29:20 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:44:27 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "lib_str.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	const size_t	len_dst = ft_strlen(dst);
	const size_t	len_src = ft_strlen(src);
	size_t			i;

	i = 0;
	if (len > len_dst)
	{
		while (len_dst + i < len - 1 && i < len_src)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = 0;
	}
	else
		return (len_src + len);
	return (len_dst + len_src);
}
