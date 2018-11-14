/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syducamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:51:52 by syducamp          #+#    #+#             */
/*   Updated: 2018/09/02 18:58:40 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printsquare(int x, int y, int col, int ln)
{
	if (x > 0 && y > 0)
	{
		while (ln <= y)
		{
			col = 1;
			while (col <= x)
			{
				if ((col == 1 && ln == 1)
					|| (col == x && ln == y && y != 1 && x != 1))
					ft_putchar('/');
				else if ((col == x && ln == 1) || (col == 1 && ln == y)
					|| (col == x && y == 1))
					ft_putchar('\\');
				else if (col > 1 && ln > 1 && col < x && ln < y)
					ft_putchar(' ');
				else
					ft_putchar('*');
				col++;
			}
			ln++;
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	int col;
	int ln;

	col = 1;
	ln = 1;
	ft_printsquare(x, y, col, ln);
}
