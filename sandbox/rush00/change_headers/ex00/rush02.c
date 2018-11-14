/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syducamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:51:52 by syducamp          #+#    #+#             */
/*   Updated: 2018/09/02 19:02:55 by bboucher         ###   ########.fr       */
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
				if ((col == 1 && ln == 1) || (col == x && ln == 1))
					ft_putchar('A');
				else if ((col == x && ln == y) || (col == 1 && ln == y))
					ft_putchar('C');
				else if (col > 1 && ln > 1 && col < x && ln < y)
					ft_putchar(' ');
				else
					ft_putchar('B');
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
