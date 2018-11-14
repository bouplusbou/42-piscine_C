/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:20:14 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:45:19 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
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
//		si char est different de A-Z, renvoie 0
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char	str[] = "";
	char	str1[] = "HBKJDKJHDJHJK";
	char	str2[] = " KJNKJDJKSH";
	char	str3[] = "NKJDILJjKJLKJLJ";
	char	str4[] = "JHKJH,HIUYG";

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	return (0);
}
