/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 09:16:45 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 09:49:01 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
//	j'initialise le tableau d'int que je vais inserer dans mon tabeau d'int
	int	*babyrange;
	int	i;

	i = 0;
	if	(min >= max)
		return (0);
// caster malloc sizeof du type multiplie par le nombre d'elements a stocker pour avoir la taille en octets
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

int		main(int argc, char **argv)
{
//	j'initialise un tableau de tableaux d'int
	int	*motherrange[20];
	int	min;
	int	max;

	(void)argc;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("%d\n", ft_ultimate_range(motherrange, min, max));
	return (0);
}
