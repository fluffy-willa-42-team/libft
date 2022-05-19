/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_put_fd.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:54:49 by awillems          #+#    #+#             */
/*   Updated: 2021/12/06 09:37:49 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PUT_FD_H
# define LIB_PUT_FD_H

//==================================================//

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//==================================================//

#endif