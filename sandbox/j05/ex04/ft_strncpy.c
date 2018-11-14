/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 19:56:40 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/05 16:48:58 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strncpy copie src dans dest et remplit de '\0' si dest est plus grand que src

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
//	pour comparer avec n, utiliser un unsigned
	unsigned int	i;

	i = 0;
//	remplacer les char de dest par ceux de src
//	on parcourt tout src sauf si la taille + 1 (sizeof, cad avec le \0) de dest est atteinte
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
//	si dest est plus grand que src, rajouter la difference en '\0'
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char	dest[] = "dest";
	char	dest2[] = "dest";
	char	dest3[] = "destdestdest";
	char	dest4[] = "destdestdest";

	printf("src < dest: %s\n", strncpy(dest, "src", sizeof(dest)));
	printf("%s\n", ft_strncpy(dest2, "src", sizeof(dest2)));
	printf("src > dest: %s\n", strncpy(dest3, "source", 7));
	printf("%s\n", ft_strncpy(dest4, "source", 7));
	return (0);
}
