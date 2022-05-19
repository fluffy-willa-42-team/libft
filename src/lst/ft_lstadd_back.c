/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:41:51 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:55:19 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Ajoute l’élément new à la fin de la liste.
 * 
 * @param alst L’adresse du pointeur vers le premier élément
de la liste.
 * @param new L’adresse du pointeur vers l’élément à rajouter
à la liste.
 */
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		*alst = new;
	else
	{
		ft_lstlast(*alst)->next = new;
	}
}
