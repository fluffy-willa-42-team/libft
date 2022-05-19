/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:44:42 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 08:47:22 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_atoi_malloc(const char *str)
{
	int	*res;

	res = malloc(sizeof(int));
	if (!res)
		return (NULL);
	*res = atoi(str);
	return (res);
}
