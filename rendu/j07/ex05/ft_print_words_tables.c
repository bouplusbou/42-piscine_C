/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:01:58 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/06 19:32:56 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int	w;
	int	l;

	w = 0;
	l = 0;
	while (tab[w] != 0)
	{
		l = 0;
		while (tab[w][l])
		{
			ft_putchar(tab[w][l]);
			l++;
		}
		ft_putchar('\n');
		w++;
	}
}
