/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:19:32 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 18:14:44 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// trouver la premiere occurence d'une chaine de char (to_find) dans une autre (str)

//suppr
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size])
		size++;
	// renvoie (str) si (to_find) est vide
	if (size == 0)
		return (str);
	// iterer sur str
	while (str[i])
	{
		//lorsque l'on rencontre la premiere lettre de l'occurence, ne pas arreter de checker si to_find est dans str
		while (to_find[j] == str[i + j])
		{
			// si to_find est totalement trouve, renvoyer un pointeur a la premiere lettre de l'occurence dans (str) si (to_find) est dans (str)
			if (j == (size - 1))
				return (str + i);
			j++;
		}
		// si non, on reset l'index de to_find
		j = 0;
		i++;
	}
	// renvoie NULL si (to_find) n'est pas dans (str)
	return (0);
}

// suppr
int 	main()
{
	char	str[] = "Foo Bar Baz";

	printf("true: %s\n", strstr(str, ""));
	printf("%s\n", ft_strstr(str, ""));
	printf("true: %s\n", ft_strstr(str, "x"));
	printf("%s\n", ft_strstr(str, "x"));
	printf("true: %s\n", ft_strstr(str, "Ba"));
	printf("%s\n", ft_strstr(str, "Ba"));
	printf("true: %s\n", ft_strstr(str, "Baz"));
	printf("%s\n", ft_strstr(str, "Baz"));
	return (0);
}
