/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:45:37 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 20:46:19 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list != NULL) //si la liste n'est pas vide
	{
		tmp = ft_create_elem(data); //creer un nouveau node
		tmp->next = *begin_list; // on place le nouveau node en premier en chainant le next a toute la chaine
		*begin_list = tmp; // on replace le pointeur sur la liste en debut de chaine
	}
	else //si la liste est vide, je cree un elem
		*begin_list = ft_create_elem(data);
}

