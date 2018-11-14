/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:58:17 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 08:36:59 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_islow(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int		ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (*tab[i] != '0')
	{
		if ((*f)(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}


int		main()
{
	char	**tab;
	int		(*f)(char*);

	tab = (char**)malloc(sizeof(char*) * 3);
	tab[0] = "coUcou";
	tab[1] = "hibou";
	tab[2] = "0";
	f = &ft_islow;
	printf("%d\n", ft_any(tab, f));
	return (0);
}
