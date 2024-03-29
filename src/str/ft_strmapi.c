/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:21:06 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:44:58 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"
#include <stdlib.h>

/**
 * @brief Creates a copy of the given string and then applies the fuction f
 * to any character in the string s.
 * 
 * @param s Any String.
 * @param f Any function with the prototype void f(unsigned int, char *). 
 * The unsigned int being the index where the char * is located at that
 * execution.
 * @return A pointer the new string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
