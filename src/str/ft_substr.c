/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:12:01 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 10:32:27 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and creats a copy of the given string after start for the
 * given length
 * 
 * @param s Any string.
 * @param start The index of the start of the copy in the given string.
 * @param len The length of the copy.
 * @return A pointer to copy of the given string after start for the given length
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		end;
	size_t		i;

	end = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[start + end] && end < len)
		end++;
	if (start >= (unsigned int) ft_strlen(s))
		end = 0;
	res = malloc(sizeof(char) * (end + 1));
	if (!res)
		return (NULL);
	while (i < end)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
