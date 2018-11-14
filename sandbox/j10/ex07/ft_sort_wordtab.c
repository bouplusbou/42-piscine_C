/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:13:00 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 09:14:03 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		l;
	char	*tmp;

	l = 0;
	while (tab[l])
		l++;
	i = 0;
	while (i < l - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = -1;
		}
		i++;
	}
}

int		main(int c, char **v)
{
	int		i;
	char 	**tab;

	tab = ft_split_whitespaces(v[1]);
	i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	ft_sort_wordtab(tab);
	printf("see the changes below\n");
	i= 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
	return (c);
}
