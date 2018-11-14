/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syducamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:51:52 by syducamp          #+#    #+#             */
/*   Updated: 2018/09/01 14:52:52 by syducamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void rush(int x, int y)
{
	int pointX;
	int pointY;

	pointY = 1;
	if (x > 0 && y > 0)
	{
		while(pointY <= y)
		{
			pointX = 1;
			while(pointX <= x)
			{
				if ((pointX == 1 && pointY == 1) || (pointX == x && pointY == y && y != 1 && x != 1))
					ft_putchar('A');
				else if ((pointX == x && pointY == 1) || (pointX == 1 && pointY == y) || (pointX == x && y == 1)) 
					ft_putchar('C');
				else if (pointX > 1 && pointY > 1 && pointX < x && pointY < y)
					ft_putchar(' ');
				else 
					ft_putchar('B');	
				pointX++;
			}
			pointY++;
			ft_putchar('\n');
		}
	}
}
