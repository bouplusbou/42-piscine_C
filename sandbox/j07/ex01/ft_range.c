/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:02:18 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 09:46:19 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_print_table(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
//	je dois allouer un tableau pouvant contenir les valeurs entre min et max exclu
//	on aurait pu mettre int a la place de *tab, il suffit juste de mettre le bon type
	if (!(tab = (int*)malloc((sizeof(*tab)) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int	min;
	int	max;
	int	size;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = atoi(argv[3]);
	(void)argc;
	ft_print_table(ft_range(min, max), size);
	return (0);
}
