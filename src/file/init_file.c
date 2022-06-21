/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:33:31 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 14:15:57 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_file.h"

t_file	ft_init_file(char *name)
{
	t_file	file;

	file.name = name;
	file.fd = -1;
	return (file);
}
