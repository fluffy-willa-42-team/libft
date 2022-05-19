/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:34:57 by awillems          #+#    #+#             */
/*   Updated: 2022/01/07 11:16:25 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief Takes a NULL terminated array of Strings an returns the number of
 * elements in it.
 * 
 * @param splited An NULL terminated array of Strings.
 * @return The number of elements in it.
 */
int	ft_split_len(char **splited)
{
	int	i;

	if (!splited)
		return (0);
	i = 0;
	while (splited[i])
		i++;
	return (i);
}
