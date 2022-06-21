/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:12:02 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:40:31 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
