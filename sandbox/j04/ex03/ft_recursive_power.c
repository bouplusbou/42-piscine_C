/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:48:43 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/02 16:21:35 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

int		main(void)
{
		printf("%d\n", ft_recursive_power(3, -4));
		printf("%d\n", ft_recursive_power(3, 4));
		printf("%d\n", ft_recursive_power(10, 9));
}
