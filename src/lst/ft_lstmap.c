/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:42:35 by awillems          #+#    #+#             */
/*   Updated: 2021/11/24 09:57:35 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire
 * 
 * @param lst L’adresse du pointeur vers un élément.
 * @param f L’adresse de la fonction à appliquer.
 * @param del L’adresse de la fonction permettant de
supprimer le contenu d’un élément.
 * @return t_list* La nouvelle liste. NULL si l’allocation échoue.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	res = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			while (ft_lstlast(res) != NULL)
				del(ft_lstlast(res));
			del(temp);
			return (NULL);
		}
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}
