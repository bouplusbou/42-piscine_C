/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:36:59 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/30 14:35:28 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int c, int d)
{
	if (a * 10 + b < c * 10 + d)
	{
		ft_putchar(a + 48);
		ft_putchar(b + 48);
		ft_putchar(' ');
		ft_putchar(c + 48);
		ft_putchar(d + 48);
		if (!(a == 9 && b == 8 && c == 9 && d == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_while(int a, int b, int c, int d)
{
	while (a <= 9 && b <= 8)
	{
		while (b <= 9)
		{
			while (c <= 9 && d <= 9)
			{
				while (d <= 9)
				{
					ft_print(a, b, c, d);
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
			d = 0;
		}
		a++;
		b = 0;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	ft_while(a, b, c, d);
}
