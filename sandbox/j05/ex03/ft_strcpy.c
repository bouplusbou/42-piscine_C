/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 19:55:09 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 17:11:48 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		//remplace chaque char de la dest par ceux de la src
		dest[i] = src[i];
		i++;
	}
	//placer un marqueur de fin de chaine sur dest
	dest[i] = src[i];
	return (dest);
}

//suppr
int		main()
{
	char	dest[200] = "dst";
	char	src[20] = "src";
	char	dest1[20] = "dstpluslong";
	char	src1[20] = "src";
	char	dest2[20] = "dst";
	char	src2[20] = "srcpluslong";
	char	desttrue[20] = "dst";
	char	srctrue[20] = "src";
	char	dest1true[20] = "dstpluslong";
	char	src1true[20] = "src";
	char	dest2true[20] = "dst";
	char	src2true[20] = "srcpluslong";

	printf("true: %s\n", strcpy(desttrue, srctrue));
	printf("%s\n", ft_strcpy(dest, src));
	printf("true: %s\n", strcpy(dest1true, src1true));
	printf("%s\n", ft_strcpy(dest1, src1));
	printf("true: %s\n", strcpy(dest2true, src2true));
	printf("%s\n", ft_strcpy(dest2, src2));
return (0);
}
