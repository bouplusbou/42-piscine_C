/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:49:40 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 15:44:38 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	if (begin_list->next == NULL)
		return (begin_list);
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
