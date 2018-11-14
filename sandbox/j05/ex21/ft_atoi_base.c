/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:22:55 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/13 17:27:26 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_value(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int baselen;
	int	nb;
	int	neg;

	i = 0;
	baselen = 0;
	nb = 0;
	neg = 1;
	while (base[baselen])
		baselen++;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		neg = -neg;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_find_value(str[i], base) < baselen && str[i])
	{
		nb = (nb * baselen) + ft_find_value(str[i], base);
		i++;
	}
	return (nb * neg);
}

int		main(int c, char **v)
{
	printf("%d\n", ft_atoi_base(v[1], v[2]));
	return (0);
}
