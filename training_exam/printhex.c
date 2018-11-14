/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 12:12:29 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 13:28:41 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;
	int	i;
	int neg;

	res = 0;
	i = 0;
	neg = 0;
	if (s[i] == '-')
		neg = 1;
	while ('0' <= s[i] && s[i] <= '9')
	{
		res *= 10;
		res += s[i] - '0';
		i++;
	}
	if (neg)
		res = -res;
	return (res);
}

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{
	char base[16] = "0123456789ABCDEF";

	while (nb >= 16)
	{
		ft_putchar(base[nb % 16]);
		nb = nb / 16;
	}
}

int		main(int ac, char **av)
{
	print_hex(ft_atoi(av[1]));
	return (0);
}
