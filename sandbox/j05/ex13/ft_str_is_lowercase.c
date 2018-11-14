/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:16:53 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:47:53 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
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
//		si char est different de a-z, renvoie 0
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char	str[] = "";
	char	str1[] = "daskdaskjnjkd";
	char	str2[] = " sadjknsajdnsn";
	char	str3[] = "sdfadsBopkdpokf";
	char	str4[] = "dfdsfdsf,fdsfds";

	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	return (0);
}
