/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:40:47 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:55:50 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Libère la mémoire de l’élément passé en argument
en utilisant la fonction del puis avec free(3). La
mémoire de next ne doit pas être free.
 * 
 * @param lst L’élement à free
 * @param del L’adresse de la fonction permettant de
supprimer le contenu de l’élement.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
