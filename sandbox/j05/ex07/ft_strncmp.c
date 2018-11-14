/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:19:37 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/03 21:02:06 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// same story avec une condition supplementaire
// on arrete la comparaison a n char

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s1[i]) && (i < n))
	{
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
	printf("%d\n", ft_strncmp("foo", "foo", 3));
	printf("vrai: %d\n", ft_strncmp("foo", "foo", 3));
	printf("%d\n", ft_strncmp("foo", "bar", 3));
	printf("vrai: %d\n", ft_strncmp("foo", "bar", 3));
	printf("%d\n", ft_strncmp("al", "allo", 3));
	printf("vrai: %d\n", ft_strncmp("al", "allo", 3));
	return (0);
}
