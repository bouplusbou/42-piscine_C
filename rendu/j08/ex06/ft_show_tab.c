/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:37:07 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/17 16:10:20 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	a;
	int	i;

	a = 0;
	while (par[a].str)
	{
		i = 0;
		while (par[a].copy[i])
		{
			ft_putchar(par[a].copy[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(par[a].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[a].tab);
		a++;
	}
}
