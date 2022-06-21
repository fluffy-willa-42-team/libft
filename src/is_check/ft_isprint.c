/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:41:44 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:01:15 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if the given character is printable.
 * 
 * @param c Any char from the ascii table.
 * @return Boolean whether the condition is true or false.
 */
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
