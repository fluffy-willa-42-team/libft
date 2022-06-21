/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:55:35 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:28:04 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Find the given character in the String.
 * 
 * @param s Pointer to an String.
 * @param c Character to find.
 * @return Pointer to the first occurrence of the character.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&res[i]);
		i++;
	}
	if (s[i] == (char) c)
		return (&res[i]);
	return (0);
}
