/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:46:59 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:24:28 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "lib_is_check.h"

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
