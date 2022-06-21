/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:16:21 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:24:35 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lib_str.h"
#include "lib_is_check.h"

static int	ft_is_in_size(char *str, int nb_before, int nb_zero, int nb_digit)
{
	char	*max;
	char	*ptr;
	int		i;

	max = "2147483647";
	if (nb_before > 0 && str[nb_before - 1] == '-')
		max = "2147483648";
	if (nb_digit > 10)
		return (0);
	if (nb_digit < 10)
		return (1);
	ptr = str + nb_before + nb_zero;
	i = 0;
	while (i < nb_digit)
	{
		if (ptr[i] > max[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_int(char *str)
{
	int	len;
	int	nb_before;
	int	nb_zero;
	int	nb_digit;

	nb_before = 0;
	len = ft_strlen(str);
	if (len == 0)
		return (0);
	nb_before = 0;
	while (nb_before < len && ft_is_whitespace(str[nb_before]))
		nb_before++;
	if (nb_before < len && (str[nb_before] == '+' || str[nb_before] == '-'))
		nb_before++;
	nb_zero = 0;
	while (nb_zero < len - nb_before && str[nb_before + nb_zero] == '0')
		nb_zero++;
	nb_digit = 0;
	while (nb_digit < len - nb_before - nb_zero
		&& ft_isdigit(str[nb_before + nb_zero + nb_digit]))
		nb_digit++;
	if (len == nb_before + nb_zero + nb_digit && (nb_digit > 0 || nb_zero > 0)
		&& ft_is_in_size(str, nb_before, nb_zero, nb_digit))
		return (1);
	return (0);
}
