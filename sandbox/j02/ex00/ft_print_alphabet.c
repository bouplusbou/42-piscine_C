/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 19:36:37 by bboucher          #+#    #+#             */
/*   Updated: 2018/08/28 21:08:00 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
void	ft_print_alphabet(void);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
		{
			ft_putchar(letter);
			letter++;
		}
}

int	main()
{
	ft_print_alphabet();
	return (0);
}
