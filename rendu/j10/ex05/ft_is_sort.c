/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:18:28 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/17 21:22:31 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
