/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:28:51 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 15:58:16 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_size(int nb, int base)
{
	int	size;

	size = 1;
	while (nb / base)
	{
		nb /= base;
		size++;
	}
	return (size);
}

char	ft_find_value(int i)
{
	char	*base = "0123456789ABCDEF";

	return (base[i]);
}


char	*ft_itoabase(int nb, int base)
{
	char	*str;
	int		size;

	size = ft_find_size(nb, base);
	if (nb < 0)
		size++;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[size] = '\0';
	size--;
	printf("nb:%d\n", nb);
	while (nb >= base)
	{
		str[size] = ft_find_value(nb % base);
		nb = nb / base;
		size--;
	}
	str[size] = ft_find_value(nb);
	return (str);
}

int	main()
{
//	printf("%d\n", ft_find_size(1234));
	printf("%s\n", ft_itoabase(100, 16));
	return (0);
}
