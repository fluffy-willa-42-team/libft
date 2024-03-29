/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:55:35 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:45:24 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Find the given character in the String.
 * 
 * @param s Pointer to an String.
 * @param c Character to find.
 * @return Pointer to the last occurrence of the character.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			last = i;
		i++;
	}
	if (s[i] == (char) c)
		last = i;
	if (last == -1)
		return (0);
	else
		return ((char *)&s[last]);
}
