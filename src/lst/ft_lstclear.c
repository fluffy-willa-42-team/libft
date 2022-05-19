/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:16:03 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:56:17 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_recurisive(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		ft_lstclear_recurisive(lst->next, del);
		ft_lstdelone(lst, del);
	}
}

/**
 * @brief Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les élements qui suivent, à
l’aide de del et de free(3)
Enfin, le pointeur initial doit être mis à NULL.
 * 
 * @param lst L’adresse du pointeur vers un élément.
 * @param del L’adresse de la fonction permettant de
supprimer le contenu d’un élément.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	ft_lstclear_recurisive(*lst, del);
	*lst = NULL;
}
