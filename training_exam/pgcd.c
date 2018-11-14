/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:44:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 18:19:59 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr / 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	pgcd(int a, int b)
{
	int	res;

	if (a < b)
		res = a;
	else
		res = b;
	while (res != 0)
	{
		if (a % res == 0 && b % res == 0)
		{
			ft_putnbr(res);
			return ;
		}
		res--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		pgcd(atoi(av[1]), atoi(av[2]));
	}
//	ft_putnbr(-2147483648);
//	ft_putnbr(2);
	write(1, "\n", 1);
	return (0);
}
