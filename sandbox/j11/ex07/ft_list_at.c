/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 10:09:45 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 09:42:37 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <stdio.h>


#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 0)
		return (begin_list);
	else if (begin_list == NULL)
		return (NULL);
	else if (begin_list->next)
		return (ft_list_at(begin_list->next, nbr - 1));
	else
		return (NULL);
}
