/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:52:19 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/17 13:27:13 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_error(int c, char **v)
{
	if (c != 4)
		return (1);
	if ((ft_strcmp(v[2], "/") == 0) && (ft_strcmp(v[3], "0") == 0))
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if ((ft_strcmp(v[2], "%") == 0) && (ft_strcmp(v[3], "0") == 0))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
