/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:40:59 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:56:21 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

/**
 * @brief Itère sur la list lst et applique la fonction f au
contenu chaque élément.
 * 
 * @param lst L’adresse du pointeur vers un élément.
 * @param f   L’adresse de la fonction à appliquer.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
