/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:18 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 11:18:52 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <stdio.h>

int		ft_max(int *tab, int length)
{
	int	i;
	int max;

	i = 0;
	max = tab[i];
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int	tab[3] = {1, -1000, 3};

	printf("%d\n", ft_max(tab, 3));
	return (0);
}
