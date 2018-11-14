/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:26:59 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 19:12:52 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		do_op(int a , char op, int b)
{
	int		i;
	t_calculator	calc[5];

	i = 0;
	calc[0].operator = '+';
	calc[0].function = ft_add;
	calc[1].operator = '-';
	calc[1].function = ft_sub;
	calc[2].operator = '*';
	calc[2].function = ft_mul;
	calc[3].operator = '/';
	calc[3].function = ft_div;
	calc[4].operator = '%';
	calc[4].function = ft_mod;
	while (i < 5)
	{
		if (op == calc[i].operator)
			return (calc[i].function(a, b));
		i++;
	}
	return (0);
}


int		main(int c, char **v)
{
	if (is_error(c, v))
		return (0);
	ft_putnbr(do_op(ft_atoi(v[1]), v[2][0], ft_atoi(v[3])));
	write(1, "\n", 1);
	return(0);
}
