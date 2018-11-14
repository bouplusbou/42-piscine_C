/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:07:47 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 17:05:55 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	if (!(*begin_list))
		return ;
	prev = NULL;
	current = *begin_list;
	next = NULL;
	while (current != NULL) // tant que je ne suis pas au bout de la chaine
	{
		next = current->next; // je stocke le prochain
		current->next = prev; // je link l'actuel au precedent
		prev = current; // l'actuel devient devient le precedent
		current = next; // le prochain devient l'actuel
	}
	*begin_list = prev; // je set le debut de liste a l'ancien actuel
}
