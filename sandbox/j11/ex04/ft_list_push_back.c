/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:05:26 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 18:44:03 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <stdio.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list != NULL) // si la liste n'est pas vide
	{
		tmp = *begin_list; // on cree un clone du pointeur de base pointant sur le debut de liste et on avance ce pointeur temporaire a la fin de la liste
		while (tmp->next != NULL)
			tmp = tmp->next; // c'est ici qu'on avance
		tmp->next = ft_create_elem(data); // on ajoute un elem avec la data donnee en param
	}
	else // si la liste est vide on la remplie avec un elem
		*begin_list = ft_create_elem(data);
}
