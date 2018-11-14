/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:07:20 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/12 10:23:08 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	if (!(dest = (char*)malloc(sizeof(dest) * (l + 1))))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int	a;
//	int i;
	t_stock_par	*s; // on peut donc maintenant declarer une variable de type struct, en utilisant le nom defini grace au typedef: t_stock_par

	a = 0;
	if(!(s = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1)))) // malloc ma struct, avec le nombre d'argv
		return (0);
	while (a < ac)
	{
		s[a].size_param = ft_strlen(av[a]);
		s[a].str = av[a]; // je rentre le premier char de l'arg dans str (un char *)
//		if(!(s[a].copy = (char*)malloc(sizeof(char) * (s[a].size_param + 1)))) // malloc le mot
//			return (0);
//		i = 0;
//		while (av[a][i])
//		{
//			s[a].copy[i] = av[a][i];
//			i++;
//		}
//		s[a].copy[i] = '\0';
		s[a].copy = ft_strdup(av[a]);
		s[a].tab = ft_split_whitespaces(av[a]);
		a++;
	}
	s[a].str = 0;
	// printf("%p\n", s);
	return (s); // je renvoie l'adresse de la premiere case de la struct
}
