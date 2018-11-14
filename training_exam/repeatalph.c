/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:04:26 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 10:43:30 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		write(1, &c, 1);
		j++;
	}
}

void	printmin(char c)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int	i;

	i = 0;
	while (alph[i])
	{
		if (c == alph[i])
			printchar(c, i + 1);
		i++;
	}
}

void	printmaj(char c)
{
	char alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	i;

	i = 0;
	while (alph[i])
	{
		if (c == alph[i])
			printchar(c, i + 1);
		i++;
	}
}

void	repeatalph(char c)
{
	if ('a' <= c && c <= 'z')
		printmin(c);
	else if ('A' <= c && c <= 'Z')
		printmaj(c);
	else
		write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			repeatalph(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
