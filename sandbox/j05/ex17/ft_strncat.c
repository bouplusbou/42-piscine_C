/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:23:21 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:47:09 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
// 	on boucle sur src mais on s'arrete aprs le nbieme char de src
//	on demarre de la fin de dest et on rajoute src a la suite
	while (src[i] && i < nb)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

int		main()
{
	char	src[] = " src";
	char	dest[20] = "dest ";
	char	src1[] = " src";
	char	dest1[20] = "dest ";

	printf("%s\n", ft_strncat(dest, src, 2));
	printf("%s\n", strncat(dest1, src1, 2));
	return (0);
}
