/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poweroftwo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:26:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 17:39:39 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	printf("%d\n", is_power_of_2(atoi(av[1])));
	return (0);
}
