/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:30:49 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 11:49:50 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
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
