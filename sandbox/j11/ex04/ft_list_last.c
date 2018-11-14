/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:49:40 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 15:45:01 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)// segfault quand la liste est vide, du a l'affichage du ->data ? que dois-je retourner ?
		return (NULL);
	if (begin_list->next == NULL) // pointeur next est NULL
		return (begin_list);
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
