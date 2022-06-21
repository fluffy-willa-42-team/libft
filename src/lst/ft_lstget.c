/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:40:12 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:56:19 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

/**
 * @brief Renvoie le pointeur vers l'élément 'index' de la list 'list'.
 * 
 * @param list Le début de la liste.
 * @param index La position de l'élément recherché.
 * @return t_list* Le pointeur vers l'élément recherché.
 */
t_list	*ft_lstget(t_list *list, int index)
{
	int	i;

	i = 0;
	while (list && i < index - 1)
	{
		i++;
		list = list->next;
	}
	return (list);
}
