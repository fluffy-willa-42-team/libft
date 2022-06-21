/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:21:17 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:45:33 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

static int	ft_check_char(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * @brief Remove all character in the string set from the start and end of
 * the given string
 * 
 * @param s1 Any string.
 * @param set An array of char to be removed from the start and end of s1.
 * @return An pointer to the concatenated string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[start] && ft_check_char(set, s1[start]))
		start++;
	while (s1[end] && ft_check_char(set, s1[ft_strlen(s1) - end - 1]))
		end++;
	if (start == ft_strlen(s1))
		start = 0;
	res = ft_substr(s1, start, ft_strlen(s1) - start - end);
	return (res);
}
