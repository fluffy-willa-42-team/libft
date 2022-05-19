/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:49:05 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 09:37:37 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getword(char const *str, char c, size_t max, size_t start)
{
	size_t	i;

	i = 0;
	if ((start == 0 && str[0] != c) || str[start - 1] == c)
	{
		while (start + i <= max && str[start + i] != c)
		{
			i++;
		}
		return (i);
	}
	return (0);
}

static int	ft_split_nbword(char const *str, char c)
{
	int		count;
	size_t	i;
	size_t	len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_getword(str, c, len, i) > 0)
			count++;
		i++;
	}
	return (count);
}

static void	ft_placeword(char **res, char const *str, int index, size_t start)
{
	int		j;
	int		word_len;

	word_len = ft_getword(str, res[index][0], ft_strlen(str), start);
	j = 0;
	while (j < word_len)
	{
		res[index][j] = str[start + j];
		j++;
	}
	res[index][word_len] = 0;
}

static int	ft_placeallwords(char **res, char const *str, char c)
{
	int		word_len;
	int		index;
	size_t	i;

	i = 0;
	index = 0;
	while (i < ft_strlen(str))
	{
		word_len = ft_getword(str, c, ft_strlen(str), i);
		if (word_len > 0)
		{
			res[index] = malloc(sizeof(char) * (word_len + 1));
			if (!res[index])
				return (index);
			res[index][0] = c;
			ft_placeword(res, str, index, i);
			index++;
		}
		i++;
	}
	res[index] = NULL;
	return (0);
}

/**
 * @brief Takes a string and a character and breaks the string at every
 * instance of the character and results an NULL terminated array of
 * strings.
 * 
 * @param s Any string.
 * @param c Any character.
 * @return Pointer to an NULL terminated array of string.
 */
char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	temp;
	size_t	i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_split_nbword(s, c) + 1));
	if (!res)
		return (NULL);
	temp = ft_placeallwords(res, s, c);
	if (temp != 0)
	{
		i = 0;
		while (i < temp)
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (NULL);
	}
	return (res);
}
