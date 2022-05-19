/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:40:12 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:59:26 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
