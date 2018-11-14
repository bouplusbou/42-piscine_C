/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:36:59 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/30 10:30:54 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(' ');
	ft_putchar(',');
}

void	ft_while(int a, int b, int c, int d)
{
	while (a <= 57 && b <= 56)
	{
		while (b <= 56)
		{
			while (c <= 57 && d <= 57)
			{
				while (d <= 56)
				{
					d++;
					ft_print(a,b,c,d);
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
			d = 48;
		}
		a++;
		b = 48;
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
	d = 48;
	ft_while(a,b,c,d);
}

int 	main()
{
	ft_print_comb2();
	return (0);
}
