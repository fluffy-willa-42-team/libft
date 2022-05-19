/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_get_next_line.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:48:29 by awillems          #+#    #+#             */
/*   Updated: 2021/12/06 09:38:24 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_GET_NEXT_LINE_H
# define LIB_GET_NEXT_LINE_H

//==================================================//

# define NB_FD       10000
# define BUFFER_SIZE 256

//==================================================//

void	gnl_substr(char **n, char const *s, size_t start, size_t len);
void	gnl_strjoin(char **s1, char **s2);
char	*get_next_line(int fd);

//==================================================//

#endif