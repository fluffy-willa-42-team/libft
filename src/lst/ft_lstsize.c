/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:32:02 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:59:33 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

/**
 * @brief Compte le nombre d’éléments de la liste.
 * 
 * @param lst Le début de la liste.
 * @return int Taille de la liste.
 */
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	temp = lst;
	if (temp == NULL)
		return (0);
	i = 1;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
