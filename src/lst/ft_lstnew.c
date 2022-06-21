/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:29:58 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:59:36 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lib_list.h>
#include <stdlib.h>

/**
 * @brief Alloue (avec malloc(3)) et renvoie un nouvel
élément. la variable content est initialisée à
l’aide de la valeur du paramètre content. La
variable ’next’ est initialisée à NULL.
 * 
 * @param content Le contenu du nouvel élément.
 * @return t_list* Le nouvel element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}	
