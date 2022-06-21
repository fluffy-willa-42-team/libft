/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:20:40 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:42:34 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"
#include <stdlib.h>

/**
 * @brief Takes two strings and fusion them.
 * 
 * @param s1 Any string.
 * @param s2 Any string.
 * @return A poiter to the concatenated strings.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*res;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc(len_s1 + len_s2 + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s1 + len_s2)
	{
		if (i < len_s1)
			res[i] = s1[i];
		else
			res[i] = s2[i - len_s1];
		i++;
	}
	res[i] = 0;
	return (res);
}
