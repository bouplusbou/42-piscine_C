/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 14:51:57 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/03 09:30:34 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(int a, int b, int c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a == 55 && b == 56 && c == 57)
			;
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
}

int		main()
{
	ft_print_comb();
	return (0);
}
