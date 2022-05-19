/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:46:59 by awillems          #+#    #+#             */
/*   Updated: 2022/02/08 09:44:34 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

/**
 * @brief Covert an string to an integer. Format : ""
 * 
 * @param str String of a format :
 * (Any whitespace) + (sign) + (Numbers) => " -42"
 * @return An integer from the original string.
 */
int	ft_atoi(const char *str)
{
	int					i;
	unsigned long int	res;
	int					s;

	i = 0;
	s = 1;
	while (ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	res = 0;
	while (ft_isdigit(str[i]))
	{
		if (res > LONG_MAX / 10 && str[i] - 48 > (LONG_MAX % 10) - (s - 1) / 2)
			return (- (s + 1) / 2);
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return ((int)((int)res * s));
}
