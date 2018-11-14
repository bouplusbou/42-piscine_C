/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:30:25 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/13 09:09:20 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		find_next_prime(int nb)
{
	int	i;

	i = 2;
	nb++;
	while (i < nb)
	{
		if (nb % i == 0)
			return (find_next_prime(nb));
		i++;
	}
	return (nb);
}

void	fprime(int nb)
{
	int	prime;

	prime = 2;
	while (nb > 1)
	{
		if (nb % prime == 0)
		{
			printf("%d\n", prime);
			nb /= prime;
			if (nb > 1)
				printf("*");
		}
		else
			prime = find_next_prime(prime);
	}
}

int	main(int ac, char **av)
{
	fprime(atoi(av[1]));
	return (0);
}
