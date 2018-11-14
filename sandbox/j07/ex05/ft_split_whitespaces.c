/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:56:38 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 13:41:25 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_is_whitespace(char c)
{
//	je prends en compte les \0 egalement, ca me permet de prendre en compte le premier mot de la chaine
	if (c == ' ' || c == '\n' || c == '\t' || c == '\0')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int	w;
	int	i;

	w = 0;
	i = 0;
	while (str[i])
	{
//		si le char n'est pas un whitespace et que le char d'avant est un whitespace alors c'est le debut d'un mot
		if (!(ft_is_whitespace(str[i])) && ft_is_whitespace(str[i - 1]))
			w += 1;
		i++;
	}
	return (w);
}

char	*ft_malloc_word(char *str)
{
	char	*address;
	int		i;

	i = 0;
//	c'est mon compteur de char
	while (!ft_is_whitespace(str[i]))
		i++;
//	je malloc avec + 1 pour laisser la place au \0
	if (!(address = (char*)malloc(sizeof(*address) * (i + 1))))
		return (0);
	i = 0;
// je stocke le mot dans l'adresse donnee par le malloc
	while (!ft_is_whitespace(str[i]))
	{
		address[i] = str[i];
		i++;
	}
// j'ajoute le \0 en fin de chaine
	address[i] = '\0';
	return (address);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		w;

	i = 0;
	w = 0;
//	j'alloue la memoire necessaire pour creer le mothertab pouvant contenir X adresses de mots
//	+ 1 pour la derniere case, le '\0'
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_count_words(str) + 1))))
		return (0);
	while (str[i])
	{
// idem que le count words, si je tombe sur un mot
		if (!(ft_is_whitespace(str[i])) && ft_is_whitespace(str[i - 1]))
		{
//			je malloc le mot et stocke l'adresse dans mon tab
			tab[w] = ft_malloc_word(str + i);
			w++;
		}
		i++;
	}
	tab[w] = 0;
	return (tab);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		main(int argc, char **argv)
{
	char *str;
	char **tab;

	str = argv[1];
	(void)argc;
	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}
