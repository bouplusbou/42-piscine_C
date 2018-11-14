/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:36:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 08:37:28 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_upp(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}


int		ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] != NULL)
	{
		j += (*f)(tab[i]);
		i++;
	}
	return (j);
}

int		main()
{
	char	**tab;
	int		(*f)(char*);

	tab = (char**)malloc(sizeof(char*) * 4);
	tab[0] = "ABCD";
	tab[1] = "eFGH";
	tab[2] = "IJKL";
	tab[3] = 0;
	f = &ft_is_upp;
	printf("%d\n", ft_count_if(tab, f));
	return (0);
}
