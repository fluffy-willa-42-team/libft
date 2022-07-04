/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:46:59 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:24:22 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_itoa_len(int n)
{
	int				size;
	unsigned int	temp;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		temp = -n;
	}
	else
		temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		size++;
	}
	return (size);
}

static void	ft_place_all(char *res, unsigned int nb, int len)
{
	int	i;

	i = 0;
	if (nb == 0)
		res[0] = '0';
	while (nb != 0)
	{
		res[len - i - 1] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	res[len] = 0;
}

/**
 * @brief Convert an integer to a string.
 * 
 * @param n Any integer.
 * @return The string that represents n.
 */
char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*res;
	int				len;

	len = ft_itoa_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	ft_place_all(res, nb, len);
	return (res);
}
