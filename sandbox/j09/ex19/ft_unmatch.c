/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:44:27 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 12:38:28 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_unmatch(int *tab, int length)
{
	int	i;
	int unmatch;

	i = 1;
	unmatch = tab[0];

	while  (i < length)
	{
		unmatch ^= tab[i];
		i++;
	}
	return (unmatch);
}


int		main()
{
//	int	tab[9] = {1,1,2,4,3,4,2,3,4};

	int tab[2] = {1, 1};
	printf("%d\n", ft_unmatch(tab, 9));
	return (0);
}
