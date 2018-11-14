/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:30:23 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/05 15:10:19 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		a;
	char	*tmp;

	a = 1;
//	a = l'index des arguments (commence a 0)
//	argc = le nombre d'arguments
//	argc - 1 = permet d'iterer sur les arguments en utilisant leur index, sans depasser le tableau
//	./a.out b c a
//	argc = 4
//	argc - 1 = 3

//	je swap tant que je n'ai pas test toutes les paires
	while(a < (argc - 1))
	{
//		si la comparaison est positive, alors le premier est plus grand que le deuxieme, je swap
		if(ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			tmp = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = tmp;
			a = 1;
		}
		else
			a++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	argc = 0;
	while(argv[a])
	{
		while(argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		a++;
	}
}

int		main(int argc, char **argv)
{
	printf("argc: %d\n", argc);
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
