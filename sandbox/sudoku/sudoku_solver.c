/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:50:08 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/08 20:41:58 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_line(char **grid, int y, int value)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[y][i] == value)
			return (0);
		i++;
	}
	return (1);
}

int		check_column(char **grid, int x, int value)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (grid[i][x] == value)
			return (0);
		i++;
	}
	return (1);
}

int 	check_square(char **grid, int y, int x, int value)
{
	int	i;
	int j;

	i = y - (y % 3);
	j = x - (x % 3);
	while (y < i + 3)
	{
		while (x < j + 3)
		{
			if (grid[y][x] == value)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_end_of_grid(int pos)
{
	if (pos == 81)
		return (1);
	else
		return (0);
}

void	define_pos(int *pos, int *y, int *x)
{
	*y = *pos / 9 + 1; // Defini l'axe vertical (ligne) | +1 pour enlever le premier param () 
	*x = *pos % 9; // Defini l'axe horizontal (colonne)
}

int		sudoku_solver(char **grid, int pos)
{
	int x;
	int y;
	int value;
	printf("sudoku_solver called");
	value = 0;
	if (check_end_of_grid(pos)) //Verifie si fin du tableau
		return (1); //Si return 1 alors fin de tableau et tableau complet (fin du programme)

	define_pos(&pos, &y, &x); //Defini la case traite par la fonction grace a la valeur pos

	if (grid[y][x] != '0')
		return (sudoku_solver(grid, pos + 1));

	while (value <= 9)
	{
		if (check_line(grid, y, value) && check_column(grid, x, value) && check_square(grid, y, x, value))
		{
			grid[y][x] = value - '0';

			if (sudoku_solver(grid, pos + 1))
				return (1);
		}
		value++;
	}
	grid[y][x] = '0';
	return (0);
}

void	print_grid(char **grid)
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

int		main(int argc, char *argv[])
{
	(void)argc;
	print_grid(argv);
	ft_putchar('\n');
	sudoku_solver(argv, 0);
	//print_grid(argv);
	return (0);
}
