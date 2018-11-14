/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primesum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:34:26 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 12:12:22 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;
	int neg;
	int	i;

	i = 0;
	neg = 0;
	res = 0;
	while ((9 <= s[i] && s[i] <= 13) || (s[i] == ' '))
		i++;
	if (s[i] == '-')
		neg = 1;
	if (s[i] == '-' || s[i] == '+')
		i++;
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

int	ft_is_prime(int nb)
{
	int	div;

	div = nb - 1;
	while (div != 1)
	{
		if (nb % div == 0)
			return (0);
		div--;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_add_prime_sum(int nb)
{
	int	res;

	res = 0;
	while (nb != 1)
	{
		if (ft_is_prime(nb))
			res += nb;
		nb--;
	}
	return (res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
//	printf("prime: %d", ft_is_prime(6));
	write(1, "\n", 1);
	return (0);
}
