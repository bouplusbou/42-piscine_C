/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:42:38 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/14 16:46:25 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if ((base[i] == base[j] && i != j) || (base[j] == '+' || base[j] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int nb;
	int i;

	i = 0;
	if (!base_is_valid(base))
		return;
	while (base[i])
		i++;
	if (i <= 1)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	nb = nbr;
	if (nb / i)
		ft_putnbr_base((nb / i), base);
	ft_putchar(base[nb % i]);
}

int	main(int c, char **v)
{
	ft_putnbr_base(atoi(v[1]), v[2]);
	return (0);
}
