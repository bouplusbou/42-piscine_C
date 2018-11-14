/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 17:50:16 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 18:17:00 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strcmp renvoie 0 si les str comparees sont les memes
// sinon elle renvoie un positif ou un negatif
// obtenu en soustrayant le char ASCII qui differe, de s1 a celui de s2


#include <stdio.h>
#include <string.h>


int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
//	on boucle sur la chaine la plus longue
	while (s1[i] || s2[i])
	{
//		si un char differe, on soustrait s1 a s2 et on renvoie le resultat
//		printf("s1: %d s2: %d\n", s1[i], s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main()
{
	printf("%d\n", ft_strcmp("foo", "foo"));
	printf("true: %d\n\n", strcmp("foo", "foo"));
	printf("%d\n", ft_strcmp("foo", "bar"));
	printf("true: %d\n\n", strcmp("foo", "bar"));
	printf("%d\n", ft_strcmp("al", "allo"));
	printf("true: %d\n", strcmp("al", "allo"));
	return (0);
}
