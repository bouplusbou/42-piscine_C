/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 09:28:31 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 20:18:46 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (!begin_list)
		return ;
	if (*begin_list != NULL)
	{
		ft_list_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}
