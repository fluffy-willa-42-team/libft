/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:16:22 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:34:46 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

/**
 * @brief Finds the first occurence of the needle string in the haystack
 * string for the given length.
 * 
 * @param haystack Any string.
 * @param needle Any string.
 * @param len The length of char we are going to check
 * @return The pointer to the first occurence of the needle string in the
 * haystack
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*res;

	needle_len = ft_strlen(needle);
	res = ((char *)haystack);
	if (needle_len != 0)
	{
		i = 0;
		while (haystack[i] && i < len)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (j == needle_len - 1)
					return (&res[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
	return (res);
}
