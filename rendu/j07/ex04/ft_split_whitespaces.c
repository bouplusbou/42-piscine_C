/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:56:38 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 13:44:22 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
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
	while (!ft_is_whitespace(str[i]))
		i++;
	if (!(address = (char*)malloc(sizeof(*address) * (i + 1))))
		return (0);
	i = 0;
	while (!ft_is_whitespace(str[i]))
	{
		address[i] = str[i];
		i++;
	}
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
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_count_words(str) + 1))))
		return (0);
	while (str[i])
	{
		if (!(ft_is_whitespace(str[i])) && ft_is_whitespace(str[i - 1]))
		{
			tab[w] = ft_malloc_word(str + i);
			w++;
		}
		i++;
	}
	tab[w] = 0;
	return (tab);
}
