/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:54:14 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/03 08:06:56 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	nb--;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

int		main(void)
{
		printf("%d\n", ft_iterative_factorial(-5));
		printf("%d\n", ft_iterative_factorial(0));
		printf("%d\n", ft_iterative_factorial(3));
		printf("%d\n", ft_iterative_factorial(12));
		return (0);
}
