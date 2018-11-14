/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:42:56 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 13:43:54 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_tab_size(int argc, char **argv)
{
	int	i;
	int	a;
	int	size;

	a = 1;
	size = 0;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
			i++;
		size += i + 1;
		a++;
	}
	return (size);
}

char	*ft_concat(int argc, char **argv, char *concat, int a)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
		{
			concat[j] = argv[a][i];
			i++;
			j++;
		}
		if (a == argc - 1)
			concat[j] = '\0';
		else
			concat[j] = '\n';
		j++;
		a++;
	}
	return (concat);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;

	if (!(concat = (char*)malloc(sizeof(*concat) * ft_tab_size(argc, argv))))
		return (0);
	return (ft_concat(argc, argv, concat, 1));
}
