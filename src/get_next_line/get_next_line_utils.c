/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:30:14 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:12:52 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_str.h"

void	gnl_substr(char **n, char const *s, size_t start, size_t len)
{
	char		*res;
	size_t		end;
	size_t		i;

	end = 0;
	i = 0;
	if (!s)
		return ;
	while (s[start + end] && end < len)
		end++;
	if (start >= ft_strlen(s))
		end = 0;
	res = malloc(sizeof(char) * (end + 1));
	if (!res)
		return ;
	while (i < end)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	*n = res;
}

static void	freeall(char **s1, char **s2)
{
	free(*s1);
	free(*s2);
}

void	gnl_strjoin(char **s1, char **s2)
{
	char			*res;
	size_t			i;
	const size_t	len_s1 = ft_strlen(*s1);
	const size_t	len_s2 = ft_strlen(*s2);

	if (!*s1 && !*s2)
		return (freeall(s1, s2));
	res = malloc(len_s1 + len_s2 + 1);
	if (!res)
		return (freeall(s1, s2));
	i = 0;
	while (i < len_s1 + len_s2)
	{
		if (i < len_s1)
			res[i] = (*s1)[i];
		else
			res[i] = (*s2)[i - len_s1];
		i++;
	}
	res[i] = 0;
	freeall(s1, s2);
	*s1 = res;
}
