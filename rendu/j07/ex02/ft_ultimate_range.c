/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 09:16:45 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 14:09:15 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*babyrange;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(babyrange = (int*)malloc(sizeof(*babyrange) * (max - min))))
		return (0);
	while (min < max)
	{
		babyrange[i] = min;
		min++;
		i++;
	}
	range[0] = babyrange;
	return (i);
}
