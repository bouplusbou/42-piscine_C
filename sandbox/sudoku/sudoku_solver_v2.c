/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:55:33 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/08 23:52:43 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	replaceYX(int y, int x, int *newY, int *newX) //tested
{
	if (1 <= y && y <= 3)
		    *newY = 1;
	else if (4 <= y && y <= 6)
		    *newY = 4;
	else if (7 <= y && y <= 9)
		    *newY = 7;
	if (0 <= x && x <= 2)
		    *newX = 0;
	else if (3 <= x && x <= 5)
		    *newX = 3;
	else if (6 <= x && x <= 8)
		    *newX = 6;
}
int		square_ok(char **grid, int y, int x, int value) //tested
{
	int newY;
	int newX;
	int tmpX;
	int tmpY;
	
	newX = 0;
	newY = 0;
	replaceYX(y, x, &newY, &newX);
	tmpX = newX;
	tmpY = newY;
	//printf("Value = %i.\n", value);
	//printf("Y = %i, newY = %i, tmpY = %i.\n", y, newY, tmpY);
	//printf("X = %i, newX = %i, tmpX = %i.\n", x, newX, tmpX);
	while (newY <= tmpY + 2)
	{
		while (newX <= tmpX + 2)
		{
			if (grid[newY][newX] == value + '0')
				return (0);
			newX++;
		}
		newX = tmpX;
		newY++;
	}
	return (1);
}

int		line_ok(char **grid, int y, int value) //tested
{
	int i;

	i = 0;
	while (i <= 8 )
	{
		if (grid[y][i] == value + '0')
			return (0);
		i++;
	}
	return (1);
}

int		column_ok(char **grid, int x, int value)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		if (grid[i][x] == value + '0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		end_of_grid(int y, int x) //tested
{
	if (y > 9 && x > 8)
		return (1);
	return (0);
}

void	incremented_yx_value(int *y, int *x) //tested
{
	if (*x == 8)
	{
		*x = 0;
		*y = *y + 1;;
	}
	else
	{
		*x = *x + 1;
	}
}

void	print_grid(char **grid) //tested
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			if (grid[i][j] == '.')
				ft_putchar('0');
			else
				ft_putchar(grid[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		filled_case(char **grid, int y, int x)  //tested
{
	if (grid[y][x] != '.')
		return (1);
	return (0);
}

int		sudoku(char **grid, int y, int x)
{
	int value;
	int newY;
	int newX;

	value = 1;
	if (end_of_grid(y, x)) //Si fin du tableau, return true donc stop
		return (1);

	if (filled_case(grid, y, x)) //si case rempli incrementation de la position et recursive
	{
		newX = x;
		newY = y;
		incremented_yx_value(&newY, &newX);
		return (sudoku(grid, newY, newX));
	}

	while (value <= 9)
	{
		if (line_ok(grid, y, value) && column_ok(grid, x, value) && square_ok(grid, y, x, value)) //Si value pas dans lne/column/square
		{
			printf("Y = %i, X = %i, value = %i.\n", y, x, value);
			print_grid(grid);
			ft_putchar('\n');
			grid[y][x] = value + '0';//Assigner valeur a la case
			newX = x;
			newY = y;
			incremented_yx_value(&newY, &newX);
			if(sudoku(grid, newY, newX)) //Tester case d apres vue que valeur assignee precedement
				return (1);//Fin et sudoku complet
		}
		value++;
	}
	grid[y][x] = '0';
	return (0); //a enlever plus tard
}

int		main(int argc, char *argv[])
{
	(void)argc;
	print_grid(argv);
	sudoku(argv, 1, 0);
	print_grid(argv);
	return (0);
}
