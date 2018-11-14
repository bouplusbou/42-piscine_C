/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:28:51 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 15:58:14 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_size(int nb)
{
	int	size;

	size = 1;
	while (nb / 10)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		size;

	size = ft_find_size(nb);
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
	while (nb >= 10)
	{
		printf("add:%d, index:%d\n", (nb % 10), size);
		str[size] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	str[size] = nb + '0';
	return (str);
}

int	main()
{
//	printf("%d\n", ft_find_size(1234));
	printf("%s\n", ft_itoa(-123));
	return (0);
}
