/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:30:49 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 09:11:36 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_addone(int nb)
{
	return (nb + 1);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int	*tab2;

	i = 0;
	if (!(tab2 = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}

int		main()
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	(*f)(int);
	int	i;

	i = 0;
	f = &ft_addone;
	ft_map(tab, 5, f);
	while (i < 5)
	{
		printf("%d\n", ft_map(tab, 5, f)[i]);
		i++;
	}
	return (0);
}
