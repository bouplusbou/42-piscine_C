/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:18:28 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 14:46:16 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_intcmp(int i, int j)
{
	return (i - j); // renvoie un neg si i plus petit
	// 		   un pos si i plus grand
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int fail;

	i = 0;
	fail = 0;
	if (length < 2)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			fail = 1;
		i++;
	}
	if (fail == 0)
		return (1);
	fail = 0;
	while (i > 0)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			fail = 1;
		i--;
	}
	if (fail == 0)
		return (1);
	return (0);
}

int		main()
{
	int	tab1[4] = {1, 2, 3, 4};
	int	tab2[4] = {4, 3, 2, 1};
	int	tab3[4] = {1, 1, 1, 1};
	int	tab4[4] = {1, 2, 4, 3};
	int	tab5[4] = {1, 1, 2, 3};
	int	tab6[4] = {1, 1, 3, 2};
	int	tab7[3] = {-382904, -264957, 4154162};
//	int	tab7[3] = {-3, -2, 4};
	int	(*f)(int, int);

	f = &ft_intcmp;
	printf("1 -> %d\n", ft_is_sort(tab1, 4, f));
	printf("1 -> %d\n", ft_is_sort(tab2, 4, f));
	printf("1 -> %d\n", ft_is_sort(tab3, 4, f));
	printf("0 -> %d\n", ft_is_sort(tab4, 4, f));
	printf("1 -> %d\n", ft_is_sort(tab5, 4, f));
	printf("0 -> %d\n", ft_is_sort(tab6, 4, f));
	printf("1 -> %d\n", ft_is_sort(tab7, 3, f));
	return (0);
}
