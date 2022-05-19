/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:04:31 by awillems          #+#    #+#             */
/*   Updated: 2022/05/19 11:41:41 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//==================================================//

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>
# include <stdarg.h>

# include "lib_atoi.h"
# include "lib_file.h"
# include "lib_get_next_line.h"
# include "lib_is_check.h"
# include "lib_list.h"
# include "lib_math.h"
# include "lib_mem.h"
# include "lib_put_fd.h"
# include "lib_str.h"

//==================================================//

int		ft_apply_option(char opt, char *inp, int (*output[])(), int size, ...);
int		get_index(int index, int len);

//==================================================//

#endif