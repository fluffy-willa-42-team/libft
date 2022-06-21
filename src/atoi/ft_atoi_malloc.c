/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:44:42 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:17:59 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_atoi_malloc(const char *str)
{
	int	*res;

	res = malloc(sizeof(int));
	if (!res)
		return (NULL);
	*res = atoi(str);
	return (res);
}
