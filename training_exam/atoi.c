/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:14:04 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 14:28:28 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *s)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	while ((9 <= s[i] && s[i] <= 13) || (s[i] == ' '))
		i++;
	neg = 0;
	if (s[i] == '-')
		neg = 1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	res = 0;
	while ('0' <= s[i] && s[i] <= '9')
	{
		res *= 10;
		res += s[i] - '0';
		i++;
	}
	if (neg)
		res = -res;
	return (res);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
}

