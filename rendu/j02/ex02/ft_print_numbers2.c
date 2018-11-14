/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:14:11 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/31 13:21:38 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

int		main()
{
	int		i;
	int		let;
	int		let2;

	let = 'a';
	let2 = 'B';
	i = 0;
	while (let2 <= 'Z')
	{
		write(1, &let, 1);
		write(1, &let2, 1);
		let = let + 2;
		let2 = let2 + 2;
	}
	write(1, "\n", 1);
	return (0);
}
