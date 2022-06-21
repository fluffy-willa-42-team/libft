/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:41:51 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:59:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

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
