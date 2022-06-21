/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:04:31 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:27:27 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//==================================================//

# include <stddef.h>

# ifdef WRA
#  include "wraloc.h"
# endif /* WRA */

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