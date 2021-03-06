/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:42:56 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 09:58:23 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_tab_size(int argc, char **argv)
{
	int	i;
	int	a;
	int	size;

	a = 1;
	size = 0;
//	je parcours les arguments en commencant par le 2ieme
	while(a < argc)
	{
		i = 0;
		while (argv[a][i])
			i++;
//		j'incremente size en rajoutant 1 pour la place du '\n'
		size += i + 1;
		a++;
	}
	return (size);
}

char	*ft_concat(int argc, char **argv, char *concat, int a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
//	je boucle sur tous les arguments en commencant par le deuxieme
	while (a < argc)
	{
//		je rempli concat
		i = 0;
		while (argv[a][i])
		{
			concat[j] = argv[a][i];
			i++;
			j++;
		}
// 		je mets \n entre les arg et \0 en fin de chaine
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
//	je calcule la taille du tableau que je dois creer avant d'allouer la memoire necessaire
	if (!(concat = (char*)malloc(sizeof(*concat) * ft_tab_size(argc, argv))))
		return (0);
	return (ft_concat(argc, argv, concat, 1));
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
