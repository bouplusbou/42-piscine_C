/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:21:53 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/29 19:50:26 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a == 57 && b == 56 && c == 57 && d == 57)
	{
		;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	while (a <= 57 && b <= 56)
	{
		while (b <= 57)
		{
			while (d <= 57 && c <= 57)
			{
				while (d <= 57)
				{
					ft_print(a,b,c,d);
					d++;
				}
				d = 48;
				c++;
			}
			b++;
			if (b == 57)
			{
				c = a + 1;
				d = 48;
			}
			else
			{
				c = a;
				d = b + 1;
			}
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
