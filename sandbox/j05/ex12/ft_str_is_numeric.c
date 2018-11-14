/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:28:06 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:43:09 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
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
//		si char est different de 0-9, renvoie 0
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char	str[] = "";
	char	str1[] = "1233432543";
	char	str2[] = " 2134235";
	char	str3[] = "312323b323213";
	char	str4[] = "45234545,4325435";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	printf("%d\n", ft_str_is_numeric(str4));
	return (0);
}
