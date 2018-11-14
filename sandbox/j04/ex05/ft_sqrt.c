/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:23:51 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/02 18:02:17 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= (nb / i))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(2147483647));
	return (0);
}
