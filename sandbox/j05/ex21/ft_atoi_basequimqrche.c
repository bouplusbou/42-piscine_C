/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:22:55 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/13 16:48:41 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_value(char c, char *base)
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

int		ft_base_in(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_power(int i, int p)
{
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	return (i * (ft_power(i, p - 1)));
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int j;
	int k;
	int	nb;
	int	neg;

	i = 0;
	j = 0;
	k = 0;
	nb = 0;
	neg = 0;
	while (base[j])
		j++;
	while (str[k])
		k++;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_base_in(str[i], base))
	{
		nb += find_value(str[i], base) * ft_power(j, (k - i) - 1);
		i++;
	}
	if (neg > 0)
		nb = -nb;
	return (nb);
}


int		main(int c, char **v)
{
	printf("%d\n", ft_atoi_base(v[1], v[2]));
	return (0);
}
