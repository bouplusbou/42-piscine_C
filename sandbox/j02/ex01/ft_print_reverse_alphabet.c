/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 20:41:41 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/29 17:19:58 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
void ft_print_reverse_alphabet(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
