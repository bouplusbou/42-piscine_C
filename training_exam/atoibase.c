/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:14:04 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 15:41:22 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_find_value(char c, char *base, int baselen)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (baselen + 10);
}

int		ft_atoi_base(char *s, char *base)
{
	int	i;
	int	neg;
	int	res;
	int	baselen;

	i = 0;
	if (!ft_check_base(base))
		return (0);
	baselen = 0;
	while (base[baselen])
		baselen++;
	while ((9 <= s[i] && s[i] <= 13) || (s[i] == ' '))
		i++;
	neg = 0;
	if (s[i] == '-')
		neg = 1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	res = 0;
	while (ft_find_value(s[i], base, baselen) < baselen && s[i])
	{
		res = res * baselen + ft_find_value(s[i], base, baselen);
		i++;
	}
	if (neg)
		res = -res;
	return (res);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi_base(av[1], av[2]));
}

