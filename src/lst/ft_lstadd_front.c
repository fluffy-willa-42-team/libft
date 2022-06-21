/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:42:54 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:55:55 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

/**
 * @brief Ajoute l’élément ’new’ au début de la liste.
 * 
 * @param alst  L’adresse du pointeur vers le premier élément
de la liste.
 * @param new  L’adresse du pointeur vers l’élément à rajouter
à la liste.
 */
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
