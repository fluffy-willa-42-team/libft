/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:41:36 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:01:12 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if the given integer is a ascii character.
 * 
 * @param c Any integer.
 * @return Boolean whether the condition is true or false.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
