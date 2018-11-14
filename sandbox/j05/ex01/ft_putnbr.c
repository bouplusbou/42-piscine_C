/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:12:09 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 20:49:45 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// suppr
#include <unistd.h>

void	ft_putchar(char c);

//suppr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printintmin(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	//gestion des int min a passer en positif
	if (nb == -2147483648)
		ft_printintmin();
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
//		if (nb == 0)
//			ft_putchar(48);
		//tant que nb est superieur ou egal a 10, diviser par 10 en recursif
		//printf("%d\n", nb);
		//123
		//12
		//1 => condition d'arret validee, nb est inferieur a 10
		if (nb / 10)
			ft_putnbr(nb / 10);
		//afficher le chiffre des unites avec un putchar
		//1 => 1
		//12 => 2
		//123 => 3
		ft_putchar(nb % 10 + '0');
	}
}

//suppr
int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-123);
	ft_putchar('\n');
	return (0);
}
