/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:12:02 by awillems          #+#    #+#             */
/*   Updated: 2022/02/14 09:18:09 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_index(int index, int len)
{
	if (len < 1)
		return (-1);
	while (index < 0)
		index += len;
	while (index >= len)
		index -= len;
	return (index);
}
