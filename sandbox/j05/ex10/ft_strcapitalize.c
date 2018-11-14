/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:11:01 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 19:57:41 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
//		si le char est compris entre a-z
//		et que le char d'avant n'est ni a-z ni A-Z ni 0-9
//		je le passe en majuscule
		if (('a' <= str[i] && str[i] <= 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] -= 32;
		}
//		si le char est compris entre A-Z
//		et que le char d'avant est compris entre a-z ou A-Z ou 0-9
//		je le passe en minuscule
		if (('A' <= str[i] && str[i] <= 'Z')
			&& (('A' <= str[i - 1] && str[i - 1] <= 'Z')
			|| ('a' <= str[i - 1] && str[i - 1] <= 'z')
			|| ('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main()
{
	char	str[] = "salut, acomment tu vas ? 42mots quarante-deux; cinquante+et+un a fOO BaR BAZ";
	char	str1[] = "42MOTs";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
