/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:35:45 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:48:48 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
//	on demarre de la fin de dest et on rajoute src a la suite
	while (src[i])
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

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	return (0);
}
