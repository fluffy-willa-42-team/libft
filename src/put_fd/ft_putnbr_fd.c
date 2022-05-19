/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:14:04 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 09:30:23 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recursive(unsigned int nb, int fd)
{
	if (nb / 10 != 0)
		ft_putnbr_recursive(nb / 10, fd);
	ft_putchar_fd(48 + (nb % 10), fd);
}

/**
 * @brief Put a integer in the given file.
 * 
 * @param n Any integer.
 * @param fd A file descriptor to an open file.
 */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (fd < 0)
		return ;
	nb = n;
	if (n < 0)
	{
		nb = -n;
		ft_putchar_fd('-', fd);
	}
	ft_putnbr_recursive(nb, fd);
}
