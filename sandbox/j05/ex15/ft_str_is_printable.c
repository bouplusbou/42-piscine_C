/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:24:18 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:45:55 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	if (l == 0)
		return (1);
	while (str[i])
	{
//		si char est compris entre char ASCII 0-32 ou est 127, renvoie 0
		if ((0 <= str[i] && str[i] <= 32) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char	str[] = "";
	char	str1[] = "dfadsfdsfd21354JJH";
	char	str2[] = " 2134235";
	char	str3[] = "3\n12323b323213";
	char	str4[] = "45234545\t4325435";

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	return (0);
}
