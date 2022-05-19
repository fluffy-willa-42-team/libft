/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_atoi.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:46:15 by awillems          #+#    #+#             */
/*   Updated: 2022/02/08 10:16:52 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_ATOI_H
# define LIB_ATOI_H

//==================================================//

int		ft_atoi(const char *str);
int		*ft_atoi_malloc(const char *str);
char	*ft_itoa(int n);
int		ft_is_whitespace(char c);
int		ft_is_int(char *str);

//==================================================//

#endif