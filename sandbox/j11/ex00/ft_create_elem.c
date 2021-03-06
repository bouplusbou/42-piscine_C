/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:54:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 19:11:56 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}
