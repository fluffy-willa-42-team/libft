/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:34:57 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:40:45 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
