/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:55:35 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 09:45:10 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the given character in the String.
 * 
 * @param s Pointer to an String.
 * @param c Character to find.
 * @return Pointer to the first occurrence of the character.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&res[i]);
		i++;
	}
	if (s[i] == (char) c)
		return (&res[i]);
	return (0);
}
