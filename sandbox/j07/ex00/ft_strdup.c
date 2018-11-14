/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:03:46 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/10 09:22:11 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	// penser au \0, donc rajouter +1 a la taille du malloc
	// malloc attend une taille en octet
	// il faut typer ce que renvoie malloc car de base il renvoie un void*
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

int		main(int argc, char **argv)
{
	char	src[] = "coucou";

	(void)argc;
	(void)argv;
	printf("%s\n", strdup(src));
	printf("%s\n", ft_strdup(src));
	return (0);
}
