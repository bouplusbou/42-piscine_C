/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:14:11 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/29 12:32:20 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	 ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}

int		main()
{
	ft_print_numbers();
	return (0);
}
