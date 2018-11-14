/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:12:09 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/31 09:25:12 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printintmin()
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
	if (nb == -2147483648)
		ft_printintmin();
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}

		if (nb == 0)
			ft_putchar(48);

		if (nb/10)
			ft_putnbr(nb/10);

		ft_putchar(nb%10 + '0');
	}
}

int		main()
{
	ft_putnbr(121);
	return (0);
}
