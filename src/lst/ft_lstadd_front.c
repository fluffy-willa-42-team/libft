/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:42:54 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:53:32 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
